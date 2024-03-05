#include<iostream>
using namespace std;
class factorial{
int a;

public:
	void getinput(){
	cout<<"Factorial is: ";
	cin>>a;
	}
	void getfactorial(){
	int factorial=1;
	for(int i=1; i<a;i++){
	factorial=factorial * i;
    }  
		cout<<"The factorial is: "<<factorial<<endl;
	}
};
int main(){
	factorial f1;
	f1.getinput();
	f1.getfactorial();
}
