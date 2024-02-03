//Adding complex numbers by using pass-by-value
#include<iostream>
using namespace std;

class complex{
    int real,imag;
    public:
    void input (){
        cout<<"Enter real part: ";
        cin>> real;
        cout<<"Enter imaginary part: ";
        cin>> imag;
    }
    void sum(complex a, complex b);
    void display();
};

void complex:: sum(complex a, complex b)
{
    real= a.real+b.real;
    imag= a.imag+b.imag;
}

void complex:: display(){
    cout<<"The sum is: "<<real<<"+ i"<<imag<<endl;
}

int main(){
    complex a1,a2,a3;
    a1.input();
    a2.input();
    a3.sum(a1,a2);
    a3.display();
    return 0;
}