#include<iostream>
using namespace std;
class array_sum{
	private:
		int array[6];
	public:
		void get_array(){
		for(int i=1;i<6;i++){
			cout<<"enter values: ";
			cin>>array[i];
		}	
		}
		int display(){
			int sum=0;
			float avg =0.0;
			for(int i=1;i<6;i++){
			 sum=sum+array[i];}
			avg=sum/6;
			cout<<"sum is : "<<sum<<endl;
			cout<<"avg is : "<<avg<<endl;
		}
};
int main(){
	array_sum a1;
	a1.get_array();
	a1.display();
}
