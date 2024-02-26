#include<iostream>
using namespace std;
class number{
	int a=0;
	public:
    number(){
    	a=0;
	}
	number(int num){
		a=num;
	}
	number(number& obj){
		a=obj.a;
		cout<<"copy constructor is: ";
	}
	void display(){
		cout<<"number is: "<<a<<endl;
	}
};
int main(){
	number n1,n2,n3(45);
	n1.display();
	n2.display();
	n3.display();
	number x(n3);
	x.display();
}
