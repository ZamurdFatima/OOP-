#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		void getdis()
		{
			cout<<"feet= "; cin>>feet;
			cout<<"inches= "; cin>>inches;
		}
		void showdis(){
			cout<<feet<<"\-'"<<inches<<'\"';
		}
	Distance(){
		feet=0;
		inches=0.0;
	}
	Distance(int ft,float in){
		feet=ft;
		inches=in;
	}
};
int main(){
	Distance dist1(11,6.25);
	Distance dist2(dist1);
	Distance dist3=dist1;
	
	cout<<"\ndist1=";
	dist1.showdis();
	cout<<"\ndist2=";
	dist2.showdis();
	cout<<"\ndist3=";
	dist3.showdis();
}
