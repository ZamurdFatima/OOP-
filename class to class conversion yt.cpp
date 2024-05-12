#include<iostream>
using namespace std;
class rectangle{
    int width, length,area;
	public:
	    rectangle(int b, int h){
	    	width=b;    length=h;    area=width*length;
		}	
		void output(){
			cout<<"\nwidth: "<<width;   	cout<<"\nlength: "<<length;    	cout<<"\narea: "<<area;
		}
//		rectangle(triangle t){
//			width=t.getbase();      length=t.getheight();      area=width*length;
//		}
};
class triangle{
    int base, height;
	float area;
	public:
	    triangle(int b, int h){
	    	base=b;    height=h;    area=0.5*base*height;
		}	
		void print(){
			cout<<"\nbase: "<<base;    	cout<<"\nheight: "<<height;   	cout<<"\narea: "<<area<<endl;
		}
//		int getbase(){ return base;}
//		int getheight(){ return height;}
		
		operator rectangle(){
		rectangle temp(base,height);     //obj passed with rectangle return type
		return temp;
		}
};

int main(){
	triangle t(10,20);
	rectangle r=t; 
	//triangle to rectangle    (casting operator) 
	//rectanle to triangle    (constructor)
	  
	t.print();
	r.output();
}

