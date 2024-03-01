#include<iostream>
using namespace std;
class time{
	private:
		int hour;
		int min;
		int sec;
	public:
		void display()const{
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
		time add_type(time t1)const;
		time(){
			hour=00;
			min=00;
			sec=00;
		}
		time(int h,int m,int s){
			hour=h;
			min=m;
			sec=s;
		}
};
time time::add_type(time t1)const{
	time temp;
	temp.hour=hour+t1.hour;
	temp.min=min+t1.min;
	temp.sec=sec+t1.sec;
	return temp;
}
int main(){
	time s,t,u(11,59,59);
	t=s.add_type(u);
	cout<<"s:\n";
	s.display();
	cout<<"t:\n";
	t.display();
	cout<<"u:\n";
	u.display();
}
