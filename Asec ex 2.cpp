#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length=6;
		int width=2;
	public:
		void area(){
			int a=length*width;
			cout<<"Area of rectangle is: "<<a<<endl;
		}
		void pe(){
			int p = 2*(length+width);
			cout<<"Perimeter of rectangle is: "<<p<<endl;
		}
};
int main(){
	Rectangle r1;
	r1.area();
	r1.pe();
}
