#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st1[50];
    char st2[50];
    int len;
    cout<<"Enter 1st string: ";
    gets(st1);
    cout<<"Enter 2st string: ";
    gets(st2);
    
	len=strlen(st1);                                              //strlen counts char length including spaces but not null. 
	cout<<st1<<" has "<<len<<" characters."<<endl;
    len=strlen(st2);
	cout<<st2<<" has "<<len<<" characters."<<endl; 
	
	strcat(st1,st2);                                              //1st & 2nd string addition, then both added in 1st one.
	cout<<"String length 1 after cancatenation is: "<<endl;
	puts(st1);                                                    //puts()is used to display...work same as cout
}
