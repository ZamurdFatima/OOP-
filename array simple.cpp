#include<iostream>
using namespace std;
class student{
int array[3];
public:
	void getinfo(){
		cout<<"3 Subject marks: "<<endl;
		for(int i=1;i<=3;i++)
		cin>>array[i];
	}
	void sum_avg(){
		int i;
		int sum=0;
		double avg=0.0;
		for(int i=1;i<=3;i++){
		sum=sum+array[i];}
		cout<<"Our sum is: "<<sum<<endl;
		avg=sum/3;
		cout<<"Our avg is: "<<avg<<endl;
	}};
	int main(){
		student s1;
		s1.getinfo();
		s1.sum_avg();
	}
