#include<iostream>
using namespace std;
class Distance{
	int feet;
	float inches;
	public:
		Distance(){
			feet=0;
			inches=0.0;
		}
		Distance(int f,float i){
			feet=f;
			inches=i;
		}
		void get(){
			cout<<"feet:"<<endl;
			cin>>feet;
			cout<<"inches:"<<endl;
			cin>>inches;
		}
		void show(){
			cout<<"feet "<<feet <<"     inches"<< inches <<endl;
		}
	    Distance operator +(Distance d);
	    Distance operator -(Distance d1);
	    Distance operator *(Distance d2);
};
        Distance Distance::operator +(Distance d){
        	int f=feet+d.feet;
        	int i=inches+d.inches;
        	if(i >= 12.0) 
        { 
        while(i >= 12.0) {
        i -= 12.0; 
        f++;       
        }
        }
        return Distance(f,i);  
		}
		Distance Distance::operator -(Distance d1){
        	int f=feet-d1.feet;
        	int i=inches-d1.inches;
        	if(i < 0) 
        { 
        while(i < 0){
        i += 12; 
        f--;       
        }
    }
        return Distance(f,i);  
		}
		Distance Distance::operator *(Distance d2){
        	int f=feet*d2.feet;
        	int i=inches*d2.inches;
        	if(i >= 12.0) 
        { 
        while(i >= 12.0) {
        i -= 12.0; 
        f++;      
        }
        return Distance(f,i);  
		}
    }
int main(){
	Distance dist1(2,6.5),dist2(3,8.25),dist3(1,10.75),dist4(2,3.5),dist5;
	 dist5 = dist1 + dist2 - dist3 * dist4;
	 
	 cout<<"result: "<<endl;
	 dist5.show();
}
