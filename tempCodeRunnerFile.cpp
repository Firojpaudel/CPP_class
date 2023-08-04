#include<iostream>
using namespace std;

class two; // pre-declaration

class one {
    int secondPvtData;  

public:
    one(int data) : secondPvtData(data) {}

    void access(two objA);
    friend void bridge(two objA, one objB);
};

class two {
    int pvtData;

public:
    two(int data) : pvtData(data) {}

    void access(one objB) {
        bridge(*this, objB);
    }
    friend void bridge(two objA, one objB);
};

void bridge(two objA, one objB) {
    cout << "Class one is accessing the private data of Class two: " << objA.pvtData << endl;
    cout << "Class two is accessing the private data of Class one: " << objB.secondPvtData << endl;
}

void one::access(two objA) {
    bridge(objA, *this);
}

int main() {
    two objectA(10);
    one objectB(20);

    objectB.access(objectA);

    return 0;
}
