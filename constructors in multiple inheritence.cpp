#include <iostream>
 using namespace std;
 class A //base class
 {private:
 int a;
 public:
 A()
 { a=0;
 cout<<"Constructor of class A.."<<endl;
 }
 A(int n)
 {
 a=n;
 cout<<"Parametrized constructor of class A.."<<endl;
 }
 void showA(){
 cout<<"a="<<a<<endl;
 }
 };
 
class B 
{
 private:
 int b;
 public:
 B()
 {
 b=0;
 cout<<"Constructor of class B.."<<endl;
 }
  B(int n)
 {
 b=n;
 cout<<"Parametrized constructor of class B.."<<endl;
 }
  void showB(){
 cout<<"b="<<b<<endl;
 }
};

 class C: public A, public B 
{
 private:
 int c;
 public:
 C(): B(), A()
 { 
c=0;
 cout<<"Constructor of class C.."<<endl;
 }
C(int x, int y, int z): A(x), B(y)    // If we donot call parameterized constructor explicitly in class C then it will call base class default constructor
 {
 c=z;
 cout<<"Parametrized constructor of class C.."<<endl;
 }
 void showC(){
 A::showA();
 B::showB();
 cout<<"c="<<c<<endl;
 }
 };
 
int main()
 {
 C obj (1,2,3);
 obj.C::showA();                     //values,function can be display using scope resolution operator in front of derive class object.
 return 0;
}
 
