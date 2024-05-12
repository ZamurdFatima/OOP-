#include<iostream>
using namespace std;
class Kilometers
{
    private:
        double kms;
    public:
        Kilometers(double k): kms(k)
        { }
        void display(){
            cout <<kms << " Kilometers";
        }
        double getValue()
        {
            return kms;
        }
};
class Miles
{
    private:
        double miles;
    public:
        Miles(double m): miles(m)
        { }
        Miles(Kilometers km)
        {
            miles = km.getValue()/1.61;
        }
        void display()
        {
            cout<< miles<<" miles";
        }
        operator Kilometers()
        {
            return Kilometers(miles*1.61);
        }
};
int main()
{
Miles m1 = 1.0;
Kilometers k1 = m1;                        // we don't have constructor in kilometer class that takes miles object m1
                                           // so we should have conversion function in miles that convert miles into kilomters
m1.display();
cout<<" = ";
k1.display();
cout<<endl;
Kilometers k2 = 1.61;
Miles m2= k2;                              // here we have two options either we have constructor in miles class 
                                           // or conversion function in kilometers class 
k2.display();
cout<<" = ";
m2.display();
cout<<endl;
}
