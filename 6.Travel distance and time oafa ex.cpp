#include<iostream>
using namespace std;
class travel{
	private: 
	int km;
	int hr;
	public:
		void getinput();
		void display();
		void add(travel k,travel h);
		travel(int k,int h);
		travel();
};

travel::travel(){
			km=0;
			hr=0;
		}
travel::travel(int k,int h){
			km=k;
			hr=h;
		}
void travel::add(travel k,travel h)
		{
			hr=h.hr+k.hr;
			km=k.km+h.km;
		}
void travel::display()
{
			cout<<"Kilometer="<<km<<"km\t"<<"Hours="<<hr<<"hr"<<endl;
		}
void travel::getinput()
{
			cout<<"Kilometers: "<<endl;
			cin>>km;
			cout<<"Hours:"<<endl;
			cin>>hr;
	
	
		}
int main(){
	travel t1,t2(2,3),t3;
	t1.getinput();
	t1.display();
	
	t2.display();
	t3.add(t1,t2);
	t3.display();
	
	
}
