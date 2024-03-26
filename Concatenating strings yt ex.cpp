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
			cout<<"Enter : ";
			cin.getline(s,50);
			
		}
		santa operator + (santa a){
			santa temp;
			if(strlen(s)+strlen(a.s)<50){
				strcpy(temp.s,s);
				strcat(temp.s,a.s);
			}
			else{
				cout<<"String overflow...";
				exit(1);
			}
			return temp;
		}
};
int main(){
	santa s1,s2;
	cout<<"First string: "<<endl;
	s1.get();
	cout<<"Second string: "<<endl;
	s2.get();
	s1.display();
	s2.display();
	santa s3;
	s3=s1+s2;
	s3.display();                                 //why not concatinating...?
}

