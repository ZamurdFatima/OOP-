#include <iostream>
using namespace std;

class Count{
	int x,y;
	public:
		Count(){
			x=0;
			y=0;
		}
		Count(int c,int d){
			x=c;
			y=d;
		}
		Count operator -(Count obj){
			x=x - obj.x;
			y=y - obj.y;
			return Count(x,y);
		}
		void showdata(){
			cout<<"Value of x = "<<x<<endl;
			cout<<"Value of y = "<<y<<endl;
		}
};
int main(){
	Count a(3,8),b(9,6),c;
	c=a-b;
	cout<<"X and Y of a is... "<<endl;a.showdata();
	cout<<"\nX and Y of b is... "<<endl;b.showdata();
	cout<<"\nX and Y of c is... "<<endl;c.showdata();
}
