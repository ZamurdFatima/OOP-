#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    int id;
    string title;
    string author;

public:
    Book(int ID,string t,string a){
			id=ID;
			title=t;
			author=a;
		}
		~Book(){
			cout << "Book with id " << id << " destroyed.\n"<<endl;
		}
		void update(int ID,string t,string a){
			id=ID;
			title=t;
			author=a;
		}
		int operator+(Book b)const{
			return id+b.id;
		}
		void display(){
		cout<<"Title name: "<<title<<endl;
    	cout<<"Author name: "<<author<<endl;
		}
        void updatebook(Book,int,string,string);
};

    void Book::updatebook(Book b,int id,string title,string author){
	b.update(id,title,author);
	}

int main() {
    
    Book book1(101, "The Great Gatsby", "F. Scott Fitzgerald");
    Book book2(102, "To Kill a Mockingbird", "Harper Lee");
    book1.display();
    cout<<endl;
    
    book2.updatebook(book2, 103, "1984", "George Orwell");
    book2.display();
    cout<<endl;
    
    int sumOfIds = book1 + book2;
    cout << "Sum of ids: " << sumOfIds << endl;

    return 0;
}

