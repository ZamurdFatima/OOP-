 #include <iostream>
 using namespace std;
 class Counter {
 protected: 
 unsigned int count;
 public:
 Counter() : count(0) 
 {cout<<"Counter: constructor"<<endl; }
 ~Counter() 
{ cout<<"Counter: destructor"<<endl; }
 Counter(int c) : count(c) 
 { cout<<"Counter: parameterized constructor"<<endl; }
 unsigned int get_count() const 
 { return count; }
 Counter operator ++ () 
 { return Counter(++count);
 }};
 
 class CountDn : public Counter
 {
 public: 
 CountDn() : Counter()
 { 
cout<<"CountDn: constructor"<<endl;
 }
 CountDn(int c) : Counter(c) 
 { cout<<"CountDn: parameterized constructor"<<endl;}
 CountDn operator -- () 
 { return CountDn(--count);}
 ~CountDn() 
{ 
cout<<"CountDn: destructor"<<endl; 
}
};

 int main()
 {
 CountDn c1; //class CountDn
 CountDn c2(100);
 cout << "\nc1=" << c1.get_count(); //display
 cout << "\nc2=" << c2.get_count(); //display
 ++c1; ++c1; ++c1; //increment c1
 cout << "\nc1=" << c1.get_count(); //display it--c2; --c2; //decrement c2
 cout << "\nc2=" << c2.get_count(); //display it
 CountDn c3 = --c2; //create c3 from c2
 cout << "\nc3=" << c3.get_count(); //display c3
 cout << endl;
 
 return 0;
 }
