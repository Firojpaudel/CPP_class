#include<iostream>
using namespace std;

class test{
    int x,y;
    public: 
    test(){
        x=8;
        y=5;
    }
    void display(){
        cout<<x<<"\n"<<y<<endl;
    }
};

int main (){
    test v;
    v.display();
}