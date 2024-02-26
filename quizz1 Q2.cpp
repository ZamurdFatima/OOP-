#include<iostream>
using namespace std;
class even_number{
	public:
		int a;
		void get_input(){
			cout<<"enter input : ";
			cin>>a;
		}
		int check_if_even(){
			if(a%2==0){
				cout<<"its even.";
			}
			else{
				cout<<"its not even.";
			}
		}
};
int main(){
	even_number e1;
	e1.get_input();
	e1.check_if_even();
	
}
