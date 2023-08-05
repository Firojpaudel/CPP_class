/*Create a class named "Rectangle" with two data members length and breadth and a function to calculate area. The class has three constructors.

i) Having no parameter-values  of both length and breasth are assigned zero.
ii) Having two numbers as parameters the two numbers are assigned as length and breadth respectively.
iii) Having one number as parameter both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.*/

#include<iostream>
using namespace std;

class Rectangle {
    int l;
    int b;
    public:
    Rectangle() : l(),b(){}
    Rectangle(int l, int b) : l(l), b(b){} 
    Rectangle (int l): l(l), b(l){}
    
    int calc_Area(){
        return l*b;
    }
};

int main(){
    int x,y;
    cin>>x>>y;
    cout<<"The area of rectangle 1 is: ";
}