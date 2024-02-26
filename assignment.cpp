#include<iostream>
using namespace std;
class Students{
	private:
		string name;
		int roll_no;
		int semester_no;
		string course_name;
		int marks;
	public:
		void studentInfo(){
			cout<<"Enter student name= "<<name<<endl;
			cout<<"Enter student roll_no= "<<roll_no<<endl;
			cout<<"Enter student semester_no= "<<semester_no<<endl;
			cout<<"Enter student course_name= "<<course_name<<endl;
			cout<<"Your Marks= "<<marks<<endl;
			cout<<"Your Grade=";
			
		}
		void get_student_data(){
			
			cout<<"Enter student name= "<<endl;
			cin>>name;
			cout<<"Enter student roll_no= "<<endl;
			cin>>roll_no;
			cout<<"Enter student semester_no= "<<endl;
			cin>>semester_no;
			cout<<"Enter student course_name= "<<endl;
			cin>>course_name;
			cout<<"Enter marks=";
			cin>>marks;
		}
		void Display_quiz_grade(){
			if(marks>=90&&marks<=100){
				cout<<"A\n"<<endl;
			}
			else if(marks>=80&&marks<=89){
				cout<<"B\n"<<endl;
			}
		    else if(marks>=70&&marks<=79){
				cout<<"C\n"<<endl;
			}
			else if(marks<=59){
				cout<<"D\n"<<endl;
			}
			else{
				cout<<"fail\n"<<endl;
			}
		
		}
		Students(string name,int roll,int semester,string course,int mark):
		name(name),roll_no(roll),semester_no(semester),course_name(course),marks(mark){
		}
		Students():name(" "),roll_no(0),semester_no(0),course_name(" "),marks(0)
		{
		}
};
int main(){
	Students s1("zara",45,3,"oop",90); Students s2("banze",53,3,"oop",60);
	Students s3;
	s3.get_student_data();
		cout<<"\nStudent1 data\n"<<endl;
	s1.studentInfo();
	s1.Display_quiz_grade();
		cout<<"Student2 data\n"<<endl;
	s2.studentInfo();
	s2.Display_quiz_grade();
		cout<<"Student3 data
		\n"<<endl;
	s3.studentInfo();
	s3.Display_quiz_grade();
}
