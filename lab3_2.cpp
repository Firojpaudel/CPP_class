/*Create a class named "Rectangle" with two data members length and breadth and a function to calculate area. The class has three constructors.

i) Having no parameter-values  of both length and breasth are assigned zero.
ii) Having two numbers as parameters the two numbers are assigned as length and breadth respectively.
iii) Having one number as parameter both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.*/

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

    // Calculating the area of the rectangle
    int area() {
        return length * breadth;
    }
};

int main() {
    int x, y;
    
    // Input length and breadth for the rectangle
    cout<<"\tFor rectangle:\t"<<endl;
    cout << "Enter length: ";
    cin >> x;
    cout << "Enter breadth: ";
    cin >>y;
    
    // Create a rectangle object using the parameterized constructor
    rectangle r1(x, y);
    
    // Calculate and display the area of the rectangle
    cout << "Area of rectangle r1: " << r1.area() << endl;
    int z;
    
    // Input side length for the square
    cout<<"\tFor Square: \t"<<endl;
    cout << "Enter the length: ";
    cin >> z;
    
    // Create a square object using the parameterized constructor
    rectangle r2(z);
    
    // Calculate and display the area of the square
    cout << "Area of square r2: " << r2.area() << endl;

    return 0;
}
