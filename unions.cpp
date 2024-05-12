#include <iostream>
using namespace std;
//better memory unions
union money
{
    int rice=4; //4
    char car; //1
    float pounds; //4
};                                          //We can only use 1 variable at a time otherwise the compiler will give us a garbage value
    int main(){                             //The compiler chooses the data type which has maximum memory for the allocation.

        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}
