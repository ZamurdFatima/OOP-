#include <iostream>
using namespace std;
class sum{
	private:
	int a;
	int b;
	public:
		void input(){
			cin>>a;
			cin>>b;
		}
		int calculate(sum s1, sum s2){
			
				
		a	= s1.a +s2.a;
		b = s1.b + s2.b;
		
        cout<<b<<endl;
			return a+3;
	}
		
		
};
int main(){
	sum s1,s2,s3;
	s1.input();
	s2.input();
int c=	s1.calculate(s1,s2);
	
	cout<<c<<endl;
}

