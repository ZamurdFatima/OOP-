#include<iostream>
#include <cstring> //for strlen
using namespace std;
class Room{
private:
char *name;
int length;
int width;
public:
Room(): length(0), width(0), name("")
{
cout<<"Room: Default constructor"<<endl;
}
Room(const char* rName, int len, int wid){
cout<<"Room: 3 arg: constructor"<<endl;
name = new char[strlen(name)+1];
strcpy(name,rName);
length= len;
width= wid;
}
~Room(){
cout<<"Room object destroyed"<<endl;
}
void display(){
cout<<name<<" length : "<<length <<" width: "<<width<<endl;
}
};

class House
{
private:
char *hname;
Room roomList[3]; 
public:
House(const char *myname)
{
cout<<"house: constructor"<<endl;
hname= new char [strlen(myname)+1];
strcpy(hname, myname);
roomList[0] = Room("Kjitchen", 12, 15);
roomList[1] = Room("Bedroom", 24, 30);
roomList[2] = Room("TV lounge", 16, 32);
}
~House()
{ 
cout<<"House: object destroyed"<<endl;
delete [] hname;
}
void disp()
{
cout<<"Name of the house:"<<hname<<endl;
unsigned int i;
cout<<"Room details"<<endl;
for(i=0; i<3; i++){
roomList[i].display();
} cout<<endl; }
};
int main()
{
{
cout<<"Example for composition Relationship"<<endl;
cout<<"-----------------------"<<endl;
{
House hse("xyz");
cout<<"House details"<<endl;
hse.disp(); }
cout<<"Here house itself creates the Rooms and deletes as well"<< endl; }
return 0; }
