#include<iostream>
using namespace std;
class Over{
	private:
		int num;
		char ch;
	public:
		Over(){
			num=0;
			ch='x';
		}
		Over(int n,char c){
			num=n;
			ch=c;
		}
		void show(){
			cout<<"num="<<num<<endl;
			cout<<"char="<<ch<<endl;
		}
};
int main(){
	Over frst,secnd(10,'w');
	cout<<"First contents are: "<<endl;
	frst.show();
	cout<<"Second contents are: "<<endl;
	secnd.show();
}
