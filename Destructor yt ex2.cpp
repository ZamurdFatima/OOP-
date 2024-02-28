#include<iostream>
using namespace std;
int count=0;
class des1{
	public:
		des1(){
			count++;
			cout<<"Consturctor called is: "<<count<<endl;
		}
		~des1(){
			count--;
			cout<<"Desturctor called is: "<<count<<endl;
		}
};
int main(){
	des1 aa,bb,cc;
	{
		des1 dd;
	}
}
