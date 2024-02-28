#include<iostream>
using namespace std;
int count=3;
class num{
	public:
		num(){
		count++;
		cout<<"Constructor called for obj num"<<count<<endl;
}
        ~num(){
        count--;
        cout<<"Destructor called for obj num"<<count<<endl;
		}
		};
int main(){
	cout<<"Executing main function ";
	num n1;
	{ 
		cout<<"Entering block ";
		num n2,n3;
		cout<<"Exiting block ";
	}
	cout<<"Back to main";
}
