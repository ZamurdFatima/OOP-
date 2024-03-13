#include<iostream>
using namespace std;
class A{
	public:
		void Afunc(){
			cout<<"A\n";
		}
};
class B:public A{
	public:
		void Bfunc(){
			cout<<"B\n";
		}
};
class C: public B{
	
};
int main(){
	C c;
	c.Afunc();
	c.Bfunc();
}

