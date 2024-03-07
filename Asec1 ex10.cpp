#include <iostream>
using namespace std;
class Product{
	private:
	    string name;
	    int price;
	    int quantity;
	public:
		Product(string n,int p,int q){
			name=n;
			price=p;
			quantity =q;
			cout<<"Our prodct name is "<<name<<" with price."<<price<<endl;
		}
		Product(){
		}
		~Product(){
		    cout<<"Product "<<name<<" with "<<quantity<<" quantity is destroyed.\n"<<endl;	
		}
		void productDetail(){
			cout<<"Name of product is: "<<name<<endl;
			cout<<"Price of product is: "<<price<<endl;
			cout<<"Quantity of product is: "<<quantity<<endl;
		}
};
main(){
	Product p("Chiffon",500,1);
	p.productDetail();
	
}
