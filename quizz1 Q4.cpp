#include<iostream>
using namespace std;
class arry_max_min
{
	private:
		int array[6];
		public:
			void getinput()
			{
				for(int i=0;i<6;i++)
				{
					cout<<"Enter any integer = ";
					cin>>array[i];
				}
			}
			void min()
			{
				int min=0;
				min=array[0];
				for(int i=0;i<6;i++)
				{
					if(array[i]<min)
					{
						min=array[i];
					}
				}
				cout<<"MIninum number = "<<min<<endl;
			}
			void max()
			{
				int max=0;
				max=array[0];
				for(int i=0;i<6;i++)
				{
					if(array[i]>max)
					{
						max=array[i];
					}
				}
				cout<<"Maximnum number = "<<max<<endl;
			}
};
int main()
{
	arry_max_min a;
	a.getinput();
	a.min();
	a.max();
}
