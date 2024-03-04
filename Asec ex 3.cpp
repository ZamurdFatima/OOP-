#include<iostream>
#include<conio.h>
using namespace std;
class student{
	int roll;
	string name;
	int marks;
	public:
		void getinput(){
			cout<<"Student name is: "<<name;
			getline
			(cin,name);
			cout<<"Student roll no. is: "<<roll;
			(cin>>roll); //cin.ignore();
			cout<<"Student marks are: "<<marks;
			cin>>marks;			
		}
		void display(){
			cout<<"Student name is: "<<name;
			cout<<"Student roll no. is: "<<roll;
			cout<<"Student marks are: "<<marks;
		}
};
int main(){
	const int std_num=3;
	student s1[std_num];
	
	cout<<"Enter details for students: "<<std_num<<endl;
	for(int i=0;i<std_num;++i){
		cout<<"student "<<i+1<<endl;
		s1[i].getinput();
	}
	for(int i=0;i<std_num;++i){
		cout<<"student "<<i+1<<endl;
		s1[i].display();
	}
}
