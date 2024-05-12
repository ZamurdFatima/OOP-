#include<iostream>
using namespace std;
class marks{
	int sub[3];
	public:
		marks(int sub1,int sub2,int sub3){
			sub[0]= sub1;
			sub[1]= sub2;
			sub[2]= sub3;
		}
		int operator[](int o){
			return sub[o];
		}
};
int main(){
	marks n(22,33,44);
	cout<<n[0]<<endl;
	cout<<n[1]<<endl;
	cout<<n[2]<<endl;
}

