#include <iostream>
using namespace std;
class Counter
{
private:
unsigned int count;
public:
Counter() : count(0) 
{ }
unsigned int get_count() //return count
{ return count; }
Counter operator ++ ()   //increment count
{
++count;                                             //u can write inc before or after data mem.
Counter temp;           //make a temporary Counter
temp.count = count;     //give it same value as this obj
return temp;            //return the copy
}
};
int main()
{
Counter c1, c2;                      //c1=0, c2=0
cout<<"\nc1="<<c1.get_count();
cout<<"\nc2="<<c2.get_count();

++c1;                                //c1=1
c2 = ++c1;                           //c1=2, c2=2
 cout<<"\nc1="<<c1.get_count();
cout << "\nc2=" << c2.get_count() << endl;
return 0;
}
