#include<iostream>
using namespace  std;
struct book{
	char author[50];
	float price;
	
};

void dragon(book &x);
int main(){
	book b;
	cout<<"Author name & price: "<<endl;
	cin.get(b.author,40);                     
	cin>>b.price;
	dragon(b);
	cout<<"Author: "<<b.author<<endl;
	cout<<"Price: "<<b.price;
	
}
void dragon(book &x){
	x.price=x.price* 2;                        //why is parameter on left side ? , &...? 
}
