#include<iostream>
#include <conio.h>
using namespace std;
class cato{
    	private:
    		char a;
    		char b;
    	public:
    		void happy(){
    			cout<<"/|/| "<<endl<<"(=^.^=)"<<endl<<"(,,)(,,)_/"<<endl<<endl;
			}
			void dog(){
				cout<<" ____"<<endl<<"(|. .|)"<<endl<<" ((Y))"<<endl<<"(,,)(,,)_/"<<endl<<endl;
			}
			void frog(){
				cout<<" (0)..(0)"<<endl<<" /\\"<<endl<<" \\/"<<endl<<" /      \\"<<endl<<"( V    V )"<<endl<<endl;
			}
			void bird(){
				cout<<"(.>"<<endl<<"/))"<<endl<<" ,,"<<endl<<endl;
			}
			void bunny(){
				cout<<" (\\(\\"<<endl<<"( -.-)"<<endl<<" O_/) /)"<<endl<<endl;
			}
	};
	int main(){
		char ch;
		cato c1;
		cout<<"Please Press 1 2 3 4 5 to get your favouriate pets then press ECS to exit "<<endl;
		do{
			ch = getch();
		if(ch==49){
			
			c1.happy();
		}
if(ch==50){
			
			c1.dog();
		}
		if(ch==51){
			
			c1.frog();
		}
		if(ch==52){
			;
			c1.bird();
		}
		if(ch==53){
			
		c1.bunny();
	}
	}while(ch!=27);
	cout<<"Now go away and do not disturb me"<<endl;
	}
