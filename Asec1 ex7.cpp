#include <iostream>

class Circle {
private:
    double radius;
    // Assuming center is represented as (x, y)
    double center[2];

public:
    // Constructor to initialize radius and center
    Circle(double r, double x, double y) : radius(r) {
        center[0] = x;
        center[1] = y;
        std::cout << "Circle object created with radius " << radius << " and center at (" << center[0] << ", " << center[1] << ")" << std::endl;
    }

    // Destructor to display a message upon object deletion
    ~Circle() {
        std::cout << "Circle object with radius " << radius << " and center at (" << center[0] << ", " << center[1] << ") is being deleted." << std::endl;
    }

    // Function to compute the circumference of the circle
    double computeCircumference() {
        return 2 * 3.14159 * radius;
    }
};

int main() {
    // Creating a Circle object
    Circle myCircle(5.0, 2.0, 3.0);

    // Computing and displaying the circumference
    std::cout << "Circumference of the circle: " << myCircle.computeCircumference() << std::endl;

    // Object will be automatically deleted when it goes out of scope

    return 0;
}

