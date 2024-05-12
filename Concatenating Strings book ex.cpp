#include <iostream>
using namespace std;
#include <string.h>                       //for strcpy(), strcat()
#include <stdlib.h>                       //for exit()

class String                       
{
private:
enum { SZ=80 };                          //size of String objects
char str[SZ];                            //holds a string
public:
    String() 
        { strcpy(str, " "); }
    String( char s[] ) 
        { strcpy(str, s); }
        
    void display() const 
        { cout << str; }
        
    String operator + (String ss) const 
        {
        String temp; 
        if( strlen(str) + strlen(ss.str) < SZ )
        {
        strcpy(temp.str, str);                    //copy this string to temp
        strcat(temp.str, ss.str);                 //add the argument string
        }
        else
        { cout << "\nString overflow";
        exit(1); }
        return temp; 
        }
};

int main()
{
String s1 = "\nMerry Christmas! "; 
String s2 = "Happy new year!"; 
String s3; 

s1.display(); 
cout<<endl;
s2.display();
cout<<endl;
s3.display();
cout<<endl;
s3 = s1 + s2; 

s3.display(); 
cout << endl;
return 0;
}
