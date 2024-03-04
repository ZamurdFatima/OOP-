#include<iostream>
using namespace std;
class Employee{
	private:
		string name;
		string ID;
		int salary;
	public:
		void setEmployee(string n,int sal,string id){
			salary=sal;
			name=n;
			ID=id;
		}
		int getEmplyee(){
			cout<<"Name is: "<<name<<endl;
			cout<<"ID is: "<<ID<<endl;
			cout<<"Salary is: "<<salary<<endl;
			return name,ID,salary;
		}
};
int main(){
	Employee e1;
	e1.setEmployee("Zara",40000,"Student");
	e1.getEmplyee();
}
