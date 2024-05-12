#include <iostream>
using namespace std;
class test{
	int n=10;
	public:
		void show(int x){   //const default function
			n=x;
			cout<<"n: "<<n<<endl;
		}
};
main(){
	const int x=10;    //variable const
	test t;
	t.show(x);         //variable as parameter
}
