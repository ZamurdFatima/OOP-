#include<iostream>
using namespace std;
class foo{
	static int count;
	public:
		static void show(){
			cout<<count;
		}
		void display(){
			cout<<"result: ";
		}
};
int foo::count=10;
int main(){
	foo f1;
	f1.display();
	foo::show();
	
}
