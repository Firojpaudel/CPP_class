// WAP to find area of square, triangle and circle using the concept of function overloading.

#include<iostream>
using namespace std;

const double PI= 3.14159;

float area(float side){
    return side*side; //Area of square
}

double area(double base, double height){
    return (0.5)*base*height; // area of traingle
}

double area(double radius){
    return PI*radius*radius; //area of circle
}

int main ()
{
    int select;
    cout<<"Enter the shape number: ";
    cout<<"1= square"<<endl;
    cout<<"2= triangle"<<endl;
    cout<<"3= circle"<<endl;
    cin>> select;

    switch (select){
        case 1:{
            float side;
            cout<<"Enter the length of side of square: "<<endl;
            cin>> side;
            cout<<"The area of square is: "<< area(side);
            break;
        }

        case 2:{
            double base, height;
            cout<< "Enter the length of base and height respectively: ";
            cin>> base;
            cin>> height;
            cout<<"The area of triangle is: "<< area(base,height)<<endl;
            break;
        }

        case 3: {
            double radius;
            cout<< "Enter the length of radius: ";
            cin>> radius;
            cout<<"The area of circle is: "<< area (radius)<<endl;
            break;
        }
        deafult:{
            cout<<"Please enter valid shape ID! "<<endl;
        }
    }
}