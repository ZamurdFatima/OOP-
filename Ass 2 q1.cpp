#include<iostream>
using namespace std;
class time
{
	private:
		int hr , min , sec;
	public:
		time()
		{
			hr=0;
			min=0;
			sec=0;
		}
		time(int h,int m, int s)
		{hr=h;
			min=m;
			sec=s;
		}
		void operator++()
		{
        ++min;
       if(sec>=60  )                                         
{		
		        sec=sec%60;
				min++;
				
		}
		if(min>=60  )
		{		
		        
				min=min%60;
				hr++;
			}
			
		}

//		{		
//		        sec=sec%60;
//				min=min+sec/60;
//				
//		}
//		if(min>=60  )
//		{		
//		        
//				min=min%60;
//				hr=hr+min/24;
//			}
//			
//		}
		void operator--()
		{--min;
			if(min<0)
			{
				min+=60;                         //...
				--hr;
			}
		}
		void show(){
			cout<<hr<<":"<<min<<":"<<sec;
		}
};
int main(){
	time t1(2,65,89);
	
	++t1;                                         //if u pass arg or parameters its postfix
	
	--t1;                                         //if u don't have parameters its prefix
    t1.show();
	
}

