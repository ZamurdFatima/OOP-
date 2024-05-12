#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st1[50]="Programming is hectic ";
    char st2[50]="Built in function is helpful";    //string always declared infront of datatype...?
	
	cout<<"st1= ";puts(st1);
	cout<<"st2= ";puts(st2);
		
	strcpy(st1,st2);                       //1st variable string replaced by 2nd
	
	cout<<"st1= ";puts(st1);
	cout<<"st2= ";puts(st2);
		
}
