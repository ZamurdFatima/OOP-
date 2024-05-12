 #include <iostream>
 using namespace std;

 class Counter //base class
 {
 protected: 
 unsigned int count; 
 public:
 Counter() : count(0) 
 { }
 Counter(int c) : count(c) 
 { }
 unsigned int get_count() const 
 { return count; }
 Counter operator ++ ()
 { return Counter(++count); }
 };
 
  class CountDn : public Counter //derived class
 {
 public:
 Counter operator -- ()
 { return Counter(--count); }
 };
 int main()
 {
 CountDn c1; 
 cout << "\nc1=" << c1.get_count(); 
 ++c1; ++c1; ++c1;
 cout << "\nc1=" << c1.get_count(); //display it
 --c1; --c1; //decrement c1, twice
  cout << "\nc1=" << c1.get_count(); //display it
 cout << endl;
 return 0;
}
