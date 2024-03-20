#include <iostream>
using namespace std;
int main(){
int a,b,x,y;
a=b=x=y=0;

b = a++;
y=++x;

cout<<"a="<<a;
cout<<endl;
cout<<"b="<<b;
cout<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;
return 0;
}
