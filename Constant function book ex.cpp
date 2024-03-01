#include<iostream>
using namespace std;
class aClass{
	int alpha;
	public:
		void nonconst(){
			alpha=99;
			cout<<alpha;
		}
		void constfunc()const{
			
			cout<<alpha;
		}
};
int main(){
	aClass c1;
	c1.constfunc();
	c1.nonconst();
}
