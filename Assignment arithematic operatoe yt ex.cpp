#include <iostream>
using namespace std;
class book 
{
private:
    int pages,days;
public:
    book() : days(0), pages(0)
    { } 
    
    void input() 
    {
        cout << "\nHow many days have you read? "; cin >>days ;
        cout << "How many pages did you read? "; cin >> pages;
    }
    void show() const 
    { 
        cout <<"\nYou have read "<<pages<<" pages in "<<days<<" days."<<endl; 
    }
    void operator += ( book ); 
	};
    void book::operator += (book b)
    {
         days=days +b.days;
		 pages+= b.pages; 
    } 


int main()
{
book b1,b2; 
b1.input();
b2.input();
b1.show();
b2.show();
b2+=b1;
b2.show();
return 0;
}
