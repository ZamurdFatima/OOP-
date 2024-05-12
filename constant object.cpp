#include <iostream>
using namespace std;
class test{
	private:
	int i=9; 
	public:
		//can we only assign value in data members but can't pass parametric value with const obj ?
		void setvalue()const{                          //set function as constant
			//i=x;
			cout<<"value of i is: "<<i<<endl;
		}
};
main(){
	
	const test t1;
	t1.setvalue();
}
