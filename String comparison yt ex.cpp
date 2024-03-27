#include<iostream>
#include<string.h>
using namespace std;
class straw{
	char st[50];
	public:
		starw(){
			st[0]='\0';
		}
		void input(){
			cout<<"Enter string: "<<endl;
			gets(st);
		}
		void show(){
			cout<<st<<endl;
		}
		int operator ==(straw s){
			if(strlen(st) == strlen(s.st))
			return 1;
			else
			return 0;
		}
};
int main
(){
	  straw s1,s2;
	  s1.input();
	  s2.input();
	  cout<<"s1=";
	  s1.show();
	  cout<<"s2=";
	  s2.show();
	  if(s1==s2)
	  cout<<"Both strings are of equal length.";
	  else
	  cout<<"Both strings are of different length.";
}

