#include<iostream>
using namespace std;
class calculator{
	int a,b;
	public:
		void get_input(){
			cout<<"enter 1st: "<<endl;
			cin>>a;
			cout<<"enter 2nd: "<<endl;
			cin>>b;
		}
		void substract(){
			int c;
			c=a-b;
			cout<<"substraction of 2 num is : \n"<<c<<endl;
		}
		void sum(){
			int c;
			c=a+b;
			cout<<"addition of 2 num is : \n"<<c<<endl;
		}
		void product(){
			int c;
			c=a*b;
			cout<<"multiplication of 2 num is : \n"<<c<<endl;
		}
		void divide(){
			int c;
			c=a/b;
			cout<<"division of 2 num is : \n"<<c<<endl;
		}
		
};

int main(){
	calculator c1;
	c1.get_input();
	c1.dispaly_res();
	
	c1.sum();
	c1.substract();
	c1.product();
	c1.divide();
	
}
