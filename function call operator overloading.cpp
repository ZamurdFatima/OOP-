#include<iostream>
using namespace std;
class marks{
	int mark[2];
	
	public:
		marks(int m){
			mark[0]=m;
			cout<<"Constructor called\n";
		}
		void yourmark(){
			for(int i=0;i<2;i++){
			cout<<"hey i got "<<mark[i]<<" marks\n";
		}
		}
		int operator ()(int mk,int m){
			mark[0]=mk;
			mark[1]=m;
			cout<<"\nOperator called\n";
			return mark[mk],mark[m];
		}
};
int main(){
	marks obj(8);
	obj.yourmark();
	
	obj(10,2);
	obj.yourmark();
}
