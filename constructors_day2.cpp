#include<iostream>
using namespace std;

class test{
    int x,y;
    public:
    test(){
        cout<<"Enter x and y";
        cin>>x>>y;
        cout<<x<<y;
    }
};

int main (){
    test t;
}