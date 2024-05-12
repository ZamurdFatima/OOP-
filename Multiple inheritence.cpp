#include<iostream>
using namespace std;
class A{
	public:
		void Afunc(){
			cout<<"A\n";
		}
};
class B{
	public:
		void Bfunc(){
			cout<<"B\n";
		}
};
class C: public A,public B{
	
};
int main(){
	C c;
	c.Afunc();
	c.Bfunc();
}

