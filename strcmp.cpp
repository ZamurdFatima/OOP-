#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char st1[30],st2[30];
	int r;
	cout<<"String 1: ";
	cin.getline(st1,20);
	cout<<"String 2: ";
	cin.get(st2,30);
	
    r= strcmp(st1,st2);                                   //ASCI code comparison
    if(r>0){
    	cout<<"String 1 greater than string 2 "<<endl;
	}
	else if(r==0){
    	cout<<"String 1 equals to string 2 "<<endl;
	}
	else{
    	cout<<"String 1 less than string 2 "<<endl;
	}
}
