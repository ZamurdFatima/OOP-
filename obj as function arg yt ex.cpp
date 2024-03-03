#include<iostream>
using namespace std;
class time{
	int h, m;
	public:
		void getinput(){
			cout<<"Enter hours:"; cin>>h;
			cout<<"Enter minutes: "; cin>>m;
		}
		void putdata(){
			cout<<"\nHours "<<h;
			cout<<"\tMin "<<m;
		}
		void sum(time t1, time t2);
	};
	void time::sum(time t1,time t2)
		{
			h=(t1.m+t2.m)/60;
			m=(t1.m+t2.m)%60;
			h=h+(t1.h+t2.h);
		}
int main(){
	time t1,t2,t3;
	t1.getinput(); t2.getinput();
	t3.sum(t1,t2);
	t1.putdata();
	t2.putdata();
	t3.putdata();
}
