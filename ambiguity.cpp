/*1. WAP to resolve ambiguity in multiple inheritance.*/
#include<iostream>
using namespace std;
class A {
    public:
    void show() {
        cout << "Class A" << endl;
    }
};
class B {
    public:
    void show() {
        cout << "Class B" << endl;
    }
};
class C: public A, public B {
public:
    // Member function in class C, which overrides the show() method
    void show() {
        // Call the show() method of class A using scope_resolution
        A::show();
        // Call the show() method of class B using scope_resolution
        B::show();
    }
};
int main() {
    C obj;
    obj.show();
    return 0;
}