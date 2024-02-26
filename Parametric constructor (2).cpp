#include<iostream>
using namespace std;
class Complex{
	int a,b;
	public:
	
	void printNumber(){
		cout<<"your number is: "<<a<<" + "<<b<<"i"<<endl;}
	Complex(int x,int y){
	a=x;
	b=y;
    }

};

int main(){
	Complex a(4,6);
	Complex b=Complex(5,7);
	
	a.printNumber();
	b.printNumber(); 
	
return 0;
}
