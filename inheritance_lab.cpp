// Overriding a function 
#include<iostream>
using namespace std;

class College{
    public:
    void show(){
        cout<<"This is College"<<endl;
    }
};

class CSIT: public College{
    public:
    void show(){   
        cout<<"This is CSIT stream"<<endl;
    }
};

int main(){
    CSIT c;
    c.show(); //Calling member function from class CSIT
    c.College::show(); //Accessing class College through class CSIT
    return 0;
}