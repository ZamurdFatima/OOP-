 #include <iostream>
 #include <string>
 using namespace std;
 //...a
 class student                   //educational background
 {
 private:
 string school; 
 string degree; 
 public:
 void getedu()
 {
 cout << " Enter name of school or university: ";
 cin >> school;
 cout << " Enter highest degree earned \n";
 cout << " (Highschool, Bachelorís, Masterís, PhD): ";
 cin >> degree;
 }
  void putedu() const
 {
 cout << "\n School or university: " << school;
cout << "\n Highest degree earned: " << degree;
 }
 };
 //...b
 class employee
 {
 private:
 string name; 
 unsigned long number; 
 public:
 void getdata()
 {
 cout << "\n Enter last name: "; cin >> name;
 cout << " Enter number: "; cin >> number; }
 void putdata() const
 {
 cout << "\n Name: " << name;
 cout << "\n Number: " << number;}
 };
 //...1
 class manager 
 {
 private:
 string title; 
 double dues; 
 employee emp;                              //object of class employee
 student stu;                               //object of class student
 public:
 void getdata()
 {
 emp.getdata();
 cout << " Enter title: "; cin >> title;
 cout << " Enter golf club dues: "; cin >> dues;
 stu.getedu();
 }
 void putdata() const
 {
 emp.putdata();
 cout << "\n Title: " << title;
 cout << "\n Golf club dues: " << dues;
 stu.putedu();
 }
 };
 //...2
 class scientist 
 {
 private:
 int pubs; 
 employee emp;                                    //object of class employee
 student stu;                                     //object of class student
 public:
 void getdata()
 {
 emp.getdata();
 cout << " Enter number of pubs: "; cin >> pubs;
 stu.getedu();
 }
 void putdata() const
 {
 emp.putdata();
 cout << "\n Number of publications: " << pubs;
 stu.putedu();
 }
 };
//...3
 class laborer 
 {
 private:
 employee emp;                                      //object of class employee
 public:
 void getdata()
 { emp.getdata(); }
 void putdata() const
 { 
emp.putdata();
 }
 };
 
 int main()
 {
 manager m1;
 scientist s1, s2;
 laborer l1;
 cout << endl;
 cout << "\nEnter data for manager 1";          //get data for several employees
 m1.getdata(); 
 cout << "\nEnter data for scientist 1";
 s1.getdata();
 cout << "\nEnter data for scientist 2";
 s2.getdata();
 cout << "\nEnter data for laborer 1";
 l1.getdata();
 cout << "\nData on manager 1";                //display data 
 m1.putdata(); 
 cout << "\nData on scientist 1";
 s1.putdata();
 cout << "\nData on scientist 2";
 s2.putdata();
 cout << "\nData on laborer 1";
 l1.putdata();
 cout << endl;
 return 0;
  }
