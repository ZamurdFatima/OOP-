#include<iostream>
using namespace std;
class Counter{
	private:
		unsigned int count;
	public:
		
	void inc_count(){
		count++;
	}
	int get_count(){
	return count;
	}
	Counter():count(1){
			
		}
};
int main(){
	Counter c1,c2;
	cout<<"\nc1="<<c1.get_count()<<endl;
	cout<<"\nc2="<<c2.get_count()<<endl;
	c1.inc_count();
	c2.inc_count();
	cout<<"\nc1="<<c1.get_count()<<endl;
	cout<<"\nc2="<<c2.get_count()<<endl;
}
