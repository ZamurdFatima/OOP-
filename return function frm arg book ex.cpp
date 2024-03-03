#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inches;
	public:
		Distance(){
		feet=0;
		inches=0.0;
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
		Distance add_dist(Distance d1, Distance d2);		
};
Distance Distance::add_dist(Distance d1,Distance d2)
{
Distance temp;                    //temporary variable
temp.inches = inches + d1.inches+d2.inches; //add the inches
if(temp.inches >= 12.0)           //if total exceeds 12.0,
{                                 //then decrease inches
temp.inches -= 12.0;              //by 12.0 and
temp.feet = 1;                    //increase feet
}                                 //by 1
temp.feet += feet + d1.feet+d2.feet;      //add the feet
return temp;
}
int main()
{
Distance dist1, dist3(2,3.3),dist4;            //define two lengths
Distance dist2(11, 6.25);         //define, initialize dist2
dist1.getdis();                   //get dist1 from user
dist4 =dist3.add_dist(dist1,dist2);     //dist3 = dist1 + dist2
                                  //display all lengths
cout << "\ndist1 = "; dist1.showdis();
cout << "\ndist2 = "; dist2.showdis();
cout << "\ndist3 = "; dist3.showdis();
dist4.showdis();
cout << endl;
return 0;
}

