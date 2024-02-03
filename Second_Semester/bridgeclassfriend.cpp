//WAP to show the friend function acting as bridge between two classes.
#include<iostream>
using namespace std;

class two; // pre-declaration

class one {
    int x;  

public:
    void access(){
        cout<<"enter the value of x: ";
        cin>>x;
    }
    friend void bridge(one, two);
}; //end of class one

class two {
    int y;

public:
    void access() {
        cout<<endl<<"Enter the value of y: ";
        cin>>y;
    }
    friend void bridge(one,two);
};//end of class two

void bridge(one objA, two objB) {
    int z;
    z= objA.x+objB.y;
    cout<<endl<<"Sum is: "<<z;
}


int main() {
   one obj1;
   two obj2;
   obj1.access();
   obj2.access();
   bridge(obj1,obj2);
}
