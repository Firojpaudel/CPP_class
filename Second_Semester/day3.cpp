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
    complex sum(complex a, complex b);
    void display();
};

complex complex:: sum(complex a, complex b)
{
    complex d;
    d.real= a.real+b.real;
    d.imag= a.imag+b.imag;
    return d;
}

void complex:: display(){
    cout<<"The sum is: "<<real<<"+ i"<<imag<<endl;
}

int main(){
    complex a1,a2,a3;
    a1.input();
    a2.input();
    a3= a3.sum(a1,a2);
    a3.display();
    return 0;
}