#include<iostream>
using namespace std;
class Distance{
    private:
	int feet;
	double inch;
	
	public:
	void setdis(int ft,double inc){
		feet=ft;
		inch=inc;
	}
	void getdis(){
		cout<<"Feets=";cin>>feet;
		cout<<"\nInche=\n";cin>>inch;
	}
	void display(){
		cout<<feet<<"\'-"<<inch<<'\"';
	}
};
int main(){
	Distance d1,d2;
	d1.setdis(6,5.1);
	d2.getdis();
	d1.display();
	d2.display();
	cout<<endl;
}
