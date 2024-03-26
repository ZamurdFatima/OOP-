#include<iostream>
#include<string.h>
using namespace std;
class santa{
	char s[50];
	public:
		santa(){
		}
		santa(char c[]){
			strcpy(s,c);
		}
		void display(){
			cout<<s<<endl;
		}
		void get(){
			cout<<"Enter string: "<<endl;
			cin.getline(s,50);
			
		}
		santa operator + (santa a){
			santa temp;
			if(strlen(temp.s)+strlen(a.s)<50){
				strcpy(temp.s,s);
				strcmp(temp.s,a.s);
			}
			else{
				cout<<"String overflow...";
				
			}
			return temp;
		}
};
int main(){
	santa s1,s2,s3;
	s1.get();
	s2.get();
	s1.display();
	s2.display();
	s3=s1+s2;
	s3.display();
}

