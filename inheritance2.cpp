 #include <iostream>
 using namespace std;

 class A                     //base class
 {
 private:
 int privdataA;                        //(functions have the same access
 protected:                            //rules as the data shown here)
 int protdataA;
 public:
 int pubdataA=32;
 };
 class B : public A         //publicly-derived class
 {
 public:
 void funct()
 {
 int a;
 //a = privdataA;                      //error: not accessible
 a = protdataA;                      //OK
 a = pubdataA;                       //OK
 }
 };
 class C : private A        //privately-derived class
 {
 public:
 void funct()
 {
 int a;
 //a = privdataA; //error: not accessible
 a = protdataA; //OK
 a = pubdataA; //OK
 }
 };
  int main()
 {
 
 B objB;
 //a = objB.privdataA; //error: not accessible
 //a = objB.protdataA; //error: not accessible

//OK (A public to B)
  cout<<"public data:"<<objB.pubdataA; 
 C objC;
 //a = objC.privdataA; //error: not accessible
 //a = objC.protdataA; //error: not accessible
 //a = objC.pubdataA; //error: not accessible (A private to C)
 return 0;
 }
