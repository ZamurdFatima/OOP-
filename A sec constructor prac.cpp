#include<iostream>
using namespace std;
class student{
	int a;
	int b;
	public:
	    student(){
	    		cout<<"Constructer called with no parameter.\n";
		}
		student(int x){
			    cout<<"Constructer called with one parameter.\n";
		}
		student (int x , int y){
			cout<<"constructor called with two parameter.\n";
		}
};
int main(){
	student j,k(2),l(4,6);

	return 0;
}
