#include <iostream>
using namespace std;
//helps to store multiple data types
typedef struct Nora{               
	string name;
	int age;
	char bloodgrp;
}ep;                                     //if you are using struct keyword above then 
int main(){                              //in main function before obj struct will be used
	 
     ep n1 ;
     n1.name="Nara";
     n1.age=5;
     n1.bloodgrp='B';
     cout<<"The name is "<<n1.name<<endl; 
     cout<<"The age is "<<n1.age<<endl; 
     cout<<"The bloog group is "<<n1.bloodgrp<<endl; 
     return 0;
}

