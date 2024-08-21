#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor with default arguments
    Rectangle(double l = 1.0, double w = 1.0) {
        length = l;
        width = w;
    }

    // Function to calculate area
    double area() {
        return length * width;
    }

    // Function to calculate perimeter
    double perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect; // Create a rectangle with default dimensions

    cout << "Area of the rectangle: " << rect.area() << endl;
    cout << "Perimeter of the rectangle: " << rect.perimeter() << endl;

    return 0;
}
