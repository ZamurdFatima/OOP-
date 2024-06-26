#include <iostream>
 using namespace std;
 class Distance
 {
 private:
 const float MTF;
 int feet;
 float inches;
 public: 
 Distance() : feet(0), inches(0.0), MTF(3.280833F)
 { }
 //EXPLICIT one-arg constructor
 explicit Distance(float meters) : MTF(3.280833F)
 {
 float fltfeet = MTF * meters;
 feet = int(fltfeet);
 inches = 12*(fltfeet-feet);
 }
 void showdist() 
 { cout << feet << "\'-" << inches << '\"'; }
 };
 int main()
 {
 void fancy(Distance); 
 Distance dist1(2.35F);                        //convert meters to Distance
 //..Distance dist1 = 2.35F;                   //ERROR if ctor is explicit
  cout << "\ndist1 = "; dist1.showdist();
  float mtrs = 2.35F;
  cout << "\ndist1 ";
 // fancy(mtrs);                              //ERROR if ctor is explicit
 return 0;
 }
 
void fancy(Distance d)
 {
 cout << "(in feet and inches) = ";
 d.showdist();
 cout << endl;
 }
