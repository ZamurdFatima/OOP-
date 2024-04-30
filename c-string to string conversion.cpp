#include <iostream>
 using namespace std;
 #include <string.h> 
 
 class String 
 {
 private:
 enum{ SZ = 80 }; 
 char str[SZ]; //holds a C-string
 public:
 String() 
 { str[0] = '\0'; }
 String( char s[] ) 
 { strcpy(str, s); } // convert C-string to String
 void display() const 
 { cout << str; }
 operator char*() 
 { return str; } }; //convert String to C-string
 
 int main()
 {
 String s1; 
 //create and initialize C-string
 char xstr[] = "Joyeux Noel! ";
 s1 = xstr; //use 1-arg constructor to convert C-string to String
 
 s1.display(); 
 String s2 = "Bonne Annee!"; //uses 1-arg constructor to initialize String

 cout << static_cast<char*>(s2); 

 cout << endl; //to convert String to C-string
 
 return 0; //before sending to << op
 }
