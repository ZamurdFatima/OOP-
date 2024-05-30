#include<iostream>
#include <cstring> //for strlen
using namespace std;
class Employee
{
private:
char *myName_p;
public:
Employee(const char *name){
myName_p = new char[strlen(name)+1];
strcpy(myName_p,name);
}
char* display(){
return(myName_p);
}
~Employee(){
cout<<"Employee object destroyed"<<endl;
delete [] myName_p;
} };
class Company{
private:
char *cname;
Employee *myEmp_p;
public: 
Company(const char* compName, Employee* emp )
{
cname= new char [strlen(compName)+1];
strcpy(cname, compName);
myEmp_p = emp;
}
~Company()
{
cout<<"Company object destroyed"<<endl;
delete [] cname;
myEmp_p = NULL; 
} };
int main() {
cout<<"Example for aggregation"<<endl;
cout<<"-----------------------"<<endl;
{ 
cout<<"Here, an employee-david works for company-MS"<<endl;
Employee emp("David");
{
Company comp("MS", &emp);
}
// here company object will be deleted, where Employee object is still there
cout<<"At this point company object will be deleted..."<<endl;
cout<<"But emplyee--"<<emp.display();
cout<<" is still there"<<endl;
}// here Employee object will be deleted
return 0;
}
