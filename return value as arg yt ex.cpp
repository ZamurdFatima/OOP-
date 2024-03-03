#include<iostream>
using namespace std;
class sample{
    public:
    	int value;
	void get(){
		cout<<"\nEnter values: \n"; cin>>value;
	}	
    void display(){
    	cout<<"\nOur result is: \n"<<value;
	}
	sample today(sample & t){
		t.value= t.value+10;
		return t;
	}
	
};
int main()
{
	sample o,p;
	o.get();
	p=o.today(o);
	o.display();
	p.display();
}
