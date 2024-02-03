#include<iostream>
using namespace std;

template <class T>
class mynum{
    T a,b;
    public:
    mynum(T first, T second)
    {
        a= first;
        b= second;
    }
    T getmax(){
        T returnVal;
        returnVal = a>b? a: b;
        return returnVal;
    }
};

int main (){
    mynum<int>obj1(10,50);
    cout<<"Larger number among 10 and 50 is:  "<<obj1.getmax()<<endl;
    mynum<double> obj2(10.53, 10.9);
    cout<<"Larger number among 10.53 and 10.9 is:  "<<obj2.getmax()<<endl;

    return 0;
}