#include <iostream>
using namespace std;
class Distance 
    {
    private:
        const float MTF;                                   //meters to feet
        int feet;
        float inches;
    public:
    Distance() : feet(0), inches(0.0), MTF(3.280833F)
    { }
    Distance(float meters) : MTF(3.280833F)
    {                                                    //... meters to Distance
        float fltfeet = MTF * meters;                    //convert to float feet
        feet = int(fltfeet);                             
        inches = 12*(fltfeet-feet);                      
    } 
    Distance(int ft, float in) : feet(ft),inches(in), MTF(3.280833F)
    { }
    void getdist() 
    {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    void showdist() const 
    { cout << feet << "\'-" << inches << '\"'; }
    operator float() const                               //conversion operator
    {                                                    
        float fracfeet = inches/12;                      //convert the inches
        fracfeet += static_cast<float>(feet);            
        return fracfeet/MTF;                             //...Distance to meters
    }
};
int main()
{
float mtrs;
Distance dist1 = 2.35F;                                  //convert meters to Distance
cout << "\ndist1 = "; dist1.showdist();
mtrs = static_cast<float>(dist1);                        //for Distance to meters
//mtrs=dist1;                   
cout << "\ndist1 = " << mtrs << " meters\n";             


Distance dist2(5, 10.25); 
//mtrs = static_cast<float>(dist2); 
mtrs = dist2;                                            
cout << "\ndist2 = " << mtrs << " meters\n";
return 0;                                                // dist2 = mtrs; //error, = won’t convert
}
