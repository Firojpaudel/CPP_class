//WAP to show friend class.
#include <iostream>
using namespace std;

class one; // pre-declaration

class MyClass {
    int x;

public:
    void setX() {
        cout << "Enter the value of x: ";
        cin >> x;
    }

    friend class Display;
};

class Display {
public:
    void access(MyClass obj) {
        cout << "The value of x is: " << obj.x << endl;
    }
};

int main() {
    MyClass obj;
    obj.setX();

    Display friendObj;
    friendObj.access(obj);

    return 0;
}
