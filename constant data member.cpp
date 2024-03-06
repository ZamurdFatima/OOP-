#include <iostream>
using namespace std;
class test{
	const int i; //you can declare const int 
	public:
		test():i(1){  //default constructor arg in semi-colon not passed in body but why!
		    //i=10;
		}
		void show(int x){
			//i=x;
			cout<<"value of i is: "<<i<<endl;
		}
};
int main(){
	test t1;
	t1.show(30);
}


