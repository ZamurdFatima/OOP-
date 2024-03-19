#include <iostream>
using namespace std;
class base 
{
public:
	virtual void print
	(){
		cout<<"our print in base class."<<endl;
	}
	void display
	(){
		cout<<"our display in base class."<<endl;
	}
};
class derived:public base{
	public:	
		void print
	(){
		cout<<"our print in derived class."<<endl;
	}
	void display
	(){
		cout<<"our display in derived class."<<endl;
	}
};
int main(){
	base *baseptr;
	derived d;
	baseptr =&d;
	
	baseptr->print();
	baseptr->display();
}

