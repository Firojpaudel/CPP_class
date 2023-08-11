
/* Create a Rectangle */
#include<iostream>
using namespace std;

class rectangle {
private:
    int length;
    int breadth;

public:
    // Default constructor
    rectangle() {
        length = 0;
        breadth = 0;
    }

    // Parameterized constructor for rectangle
    rectangle(int x, int y) {
        length = x;
        breadth = y;
    }

    // Parameterized constructor for square
    rectangle(int z) {
        length = breadth = z;
    }

    // Method to calculate the area of the rectangle
    int area() {
        return length * breadth;
    }
};

int main() {
    int x, y;
    
    // Input length and breadth for the rectangle
    cout << "Enter length and breadth: ";
    cin >> x >> y;
    
    // Create a rectangle object using the parameterized constructor
    rectangle r1(x, y);
    
    // Calculate and display the area of the rectangle
    cout << "Area of rectangle r1: " << r1.area() << endl;

    int z;
    
    // Input side length for the square
    cout << "Enter side length for square: ";
    cin >> z;
    
    // Create a square object using the parameterized constructor
    rectangle r2(z);
    
    // Calculate and display the area of the square
    cout << "Area of square r2: " << r2.area() << endl;

    return 0;
}