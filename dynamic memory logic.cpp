       #include<iostream>
using namespace std;

class Book {
    private:
        int bookid;
        string title, author;
    public:
        Book() {
            bookid = 0;
            title = "0";
            author = "0";
        }
        Book(int i , string str, string a) {
            bookid = i;
            title = str;
            author = a;
        }
        void display() {
            cout << "Id = " << bookid << endl;
            cout << "Title = " << title << endl;
            cout << "Author = " << author << endl;
        }
        Book updateBookInfo(int id, string newTitle, string newAuthor);
        void operator+(Book& b1) {
            bookid = bookid + b1.bookid;
            cout << "Sum of ID = " << bookid << endl;
        }
        ~Book() {
            cout << "Object Destroyed!" << endl;
        }
};

Book Book::updateBookInfo(int id, string newTitle, string newAuthor) {
    Book temp;
    temp.bookid = id;
    temp.title = newTitle;
    temp.author = newAuthor;
    return temp;
}

int main() {
    Book* b1 = new Book(101, "object oriented programming","Imran Shehzad");
    Book* b2 = new Book();
    *b2 = b1->updateBookInfo(122, " Calculus", "Arif Aqeel");
    b1->display();
    cout << endl;
    cout << "--After Modification--" << endl;
    b2->display();
    cout << endl;
    *b1 + *b2;

    // Deallocating memory
    delete b1;
    delete b2;

    return 0;
}

