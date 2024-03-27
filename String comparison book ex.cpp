#include <iostream>
#include <string.h>                          //for strcmp()
using namespace std;
class String                                 //user-defined string type
{
private:
    enum { SZ = 80 };                      //size of String objects
    char str[SZ];                                     //holds a string
   // string a="zamurd";
public:
	
    String() 
    { strcpy(str, " ");}
    
    String( char s[] )         
    { strcpy(str, s); }
    
    void display() const 
    { 
	    cout << str; }
    void getstr() 
    {   
	    cin.getline(str, SZ);
		//getline(cin,a);
	}
    bool operator == (String ss) const 
    {
	return ( strcmp(str, ss.str)==0 ) ? true : false;   //compare.
	 }
 };
int main()
{
String s1 = "yes";
String s2 = "no";
String s3;
cout << "\nEnter 'yes' or 'no': ";
s3.getstr();                                             //get String from user
if(s3==s1)                                              
cout << "You typed yes\n";
else if(s3==s2)                                         
cout << "You typed no\n";
else
cout << "You didn’t follow instructions\n";
return 0;
}
