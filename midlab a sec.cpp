#include<iostream>
using namespace std;
class book{
	int id;
	string title,author;
	public:
		book(int ID,string t,string a){
			id=ID;
			title=t;
			author=a;
		}
		~book(){
			cout << "Book with id " << id << " destroyed.\n";
		}
		void update(int ID,string t,string a){
			id=ID;
			title=t;
			author=a;
		}
		int operator+(book b)const{
			return id+b.id;
		}
};
void updatebook(book b,int id,string title,string author){
	b.update(id,title,author);
}
int main() {
    book b1(101, "The Great Gatsby", "F. Scott Fitzgerald");
    book b2(102, "To Kill a Mockingbird", "Harper Lee");

    updatebook(b2, 103, "1984", "George Orwell");

    int sumOfIds = b1 + b2;
    cout << "Sum of ids: " << sumOfIds << endl;

    return 0;
}
