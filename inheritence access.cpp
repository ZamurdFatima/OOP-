 #include<iostream>
 using namespace std;
// 
// class Parent{
// public:
// int a;
// protected:
// int b;
// private:
// int c;
// };
// class Child : public Parent
// {
// public:
// void in() {
// cout<<"Enter a:";
// cin>>a;
// cout<<"Enter b:";
// cin>>b;
// //cin>>c;  // error
// }
// void out()
// {
// cout<<"a="<<a<<endl;
// cout<<"b="<<b<<endl;
// }};
// int main(){
// Child obj;
// obj.in();
// obj.out();
// return 0;
// }
 
// class Parent{
// public:
// int a;
// protected:
// int b;
// private:
// int c;
// };
// class Child : protected Parent
// {
// public:
// void in() {
// cout<<"Enter a:";
// cin>>a;
// cout<<"Enter b:";
// cin>>b;
// }
// void out()
// {
// cout<<"a="<<a<<endl;
// cout<<"b="<<b<<endl;
// }};
// int main(){
// Child obj;
// obj.in();
// obj.out();
// return 0;
// }
  class Parent{
 public:
 int a;
 protected:
 int b;
 private:
 int c;
 };
 class Child : private Parent
 {
 public:
 void in() {
 cout<<"Enter a:";
 cin>>a;
 cout<<"Enter b:";
 cin>>b;
 }
 void out()
 {
 cout<<"a="<<a<<endl;
 cout<<"b="<<b<<endl;
 }};
 int main(){
 Child obj;
 obj.in();
 obj.out();
 return 0;
 }
