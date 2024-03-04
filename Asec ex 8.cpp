#include <iostream>
using namespace std;
class Circle {
private:
    double radius;
    const double pi = 3.14;  // Use 3.14 for simplicity
public:
    // Constructor
    Circle(double initialRadius) : radius(initialRadius) {}
    // Member function to calculate the area of the circle
    double calculateArea() const {
        return pi * radius * radius;
    }
    // Member function to calculate the circumference of the circle
    double calculateCircumference() const {
        return 2 * pi * radius;
    }
    // Getter function for the radius
    double getRadius() const {
        return radius;
    }
    // Setter function for the radius
    void setRadius(double newRadius) {
        radius = newRadius;
    }
};
int main() {
    // Create Circle objects
    Circle circle1(5.0);
//    Circle circle2(7.5);
    // Display information for circle1
    std::cout << "Circle 1:" << std::endl;
    std::cout << "Radius: " << circle1.getRadius() << std::endl;
    std::cout << "Area: " << circle1.calculateArea() << std::endl;
    std::cout << "Circumference: " << circle1.calculateCircumference() << std::endl;
    std::cout << std::endl;
    // Display information for circle2
//    std::cout << "Circle 2:" << std::endl;
//    std::cout << "Radius: " << circle2.getRadius() << std::endl;
//    std::cout << "Area: " << circle2.calculateArea() << std::endl;
//    std::cout << "Circumference: " << circle2.calculateCircumference() << std::endl;
    return 0;
}

