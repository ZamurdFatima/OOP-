#include <iostream>
using namespace std;

class Collage
{
public:
	void fun(){
		cout<<"Functin with no argument."<<endl;
	}
	void fun(int n){
		cout<<"Functin with int argument."<<endl;
	}
	void fun(double n){
		cout<<"Functin with double argument."<<endl;
	}
};
int main(){
	Collage c;
	c.fun();
	c.fun(3);
	c.fun(2.4);
}
	
