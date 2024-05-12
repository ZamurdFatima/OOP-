#include <iostream>
using namespace std;
class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor to initialize length and width
    Rectangle(double l, double w) : length(l), width(w) {
       cout << "Rectangle object created with length " << length << " and width " << width << endl;
    }

    // Destructor to display a message upon object deletion
    ~Rectangle() {
     cout << "Rectangle object with length " << length << " and width " << width << " is being deleted." <<endl;
    }

    // Function to calculate the area of the rectangle
    double calculateArea() {
        return length * width;
    }
};

int main() {
    // Creating a Rectangle object
    Rectangle myRectangle(5.0, 3.0);

    // Calculating and displaying the area
    cout << "Area of the rectangle: " << myRectangle.calculateArea() <<endl;

    // Object will be automatically deleted when it goes out of scope

    return 0;
}

