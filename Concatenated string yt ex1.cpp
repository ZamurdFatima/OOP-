#include<iostream>
#include<string.h>
using namespace std;
int main
(){
	char a[50],b[50],c[100];
	
		int i,j;
		cout<<"Enter first string: "<<endl;
		gets(a);
		cout<<"Enter Second string: "<<endl;
		gets(b);
		i=j=0;
		while(a[i]!='\0'){
			c[i]=a[i];
			i++;
		}
		while(b[j]!='\0'){
			c[i]=b[j];
			i++;j++;
		}
		c[i]='\0';
		cout<<"Concatenated strings: ";
		puts(c);
}
