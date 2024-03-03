#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
			Distance(){
		
	}
	Distance(int ft,float in){
		feet=ft;
		inches=in;
	}
		void getdis()
		{
			cout<<"feet= "; cin>>feet;
			cout<<"inches= "; cin>>inches;
		}
		void showdis(){
			cout<<feet<<"\-'"<<inches<<'\"';
		}
				
		void add_dist(Distance d1,Distance d2);		
};
void Distance::add_dist(Distance d1,Distance d2)
		{
			inches=d1.inches + d2.inches;
			feet=0;
			if(inches>=12.0){
				inches-=12.0;//inches=inches - 12.0
				feet++;
			}
			feet+=d1.feet+d2.feet;
		}
int main(){
	Distance dist1,dist3;
	Distance dist2(11,6.25);
	dist1.getdis();
	dist3.add_dist(dist1,dist2);
	cout<<"\ndist1=";
	dist1.showdis();
	cout<<"\ndist2=";
	dist2.showdis();
	cout<<"\ndist3=";
	dist3.showdis();
}
