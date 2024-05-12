#include <iostream>
using namespace std;
class Counter
{
private:
    unsigned int count; 
public:
    Counter() : count(0){ }

    Counter(int c) : count(c){ }

    unsigned int get_count() const 
    { return count; }
    Counter operator ++ ()                                 //increment count (prefix)
    { 
    return Counter(++count);                               //an unnamed temporary object initialized to this count
	} 
    Counter operator ++ (int)                              //increment count (postfix) 
    {                                                      
    return Counter(count++);                               //return an unnamed temporary object initialized to this count, then increment count
    } 
};

int main()
{
Counter c1, c2; 
cout << "\nc1=" << c1.get_count();
cout << "\nc2=" << c2.get_count();
++c1; 
c2 = ++c1;                           //c1=2, c2=2 (prefix)
cout << "\nc1=" << c1.get_count();
cout << "\nc2=" << c2.get_count();
c2 = c1++;                           //c1=3, c2=2 (postfix)
cout << "\nc1=" << c1.get_count(); 
cout << "\nc2=" << c2.get_count() << endl;
return 0;
}
