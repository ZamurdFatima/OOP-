#include<iostream>
using namespace std;
class Test
{
private:
int n=1;
public:
Test(){
	n++;
cout<<"Object created ...\n"<<n<<endl;

}
~Test(){
n--;
cout<<"\nObject destroyed ...\n"<<n<<endl;

}
};
int main() 
{
Test a;

}
