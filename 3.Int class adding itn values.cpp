#include<iostream>
using namespace std;
class Int{
	int a;
	public:
		Int(){
			a=0;
		}
		Int(int d){
			a=d;
		}
		void display(){
			cout<<"Value is: "<<a;
		}
		void add(Int x,Int y);
};
void Int::add(Int x,Int y)
{
			a=x.a+y.a;
		}
int main(){
	Int i(2),j(3),k;

	k.add(i,j);
	k.display();
	
}
