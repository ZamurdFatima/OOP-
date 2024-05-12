#include <iostream>
using namespace std;
class count{
	int n;
	public:
	count(){
		n=0;
	}
	void show(){
		cout<<"n="<<n<<endl;
	}
	count operator ++ (){
		count temp;
		n++;
		temp.n=n;
		return temp;
	}
	count operator ++ (int ){
		count temp;
		n++;
		temp.n=n;
		return temp;
	}
};
int main(){
	count c;
	c.show();
	++c;                        //prefix add directly 1
	c.show();
	c++;                   
	c.show();
}
