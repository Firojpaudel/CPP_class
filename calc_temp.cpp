/*3.WAP to build simple calculator using class template.*/
#include<iostream>
using namespace std;
template <class A>
class Calculator{
    private:
        A a,b;
    public:
        Calculator (A x, A y){
            a=x;
            b=y;
        }
        A add(){
            return a+b;
        }
        A sub(){
            return a-b;
        }
        A mul(){
            return a*b;
        }
        A div(){
            return a/b;
        }
        void display();
};
template <class A>
void Calculator <A> :: display(){
    cout << "Numbers: " << a << " and " << b << endl;
    cout << a << " + " << b << " = " << add() << endl;
    cout << a << " - " << b << " = " << sub() << endl;
    cout << a << " " << b << " = " << mul() << endl;
    cout << a << " / " << b << " = " << div() << endl;
}
int main(){
    Calculator <int> c1(8,6);
    Calculator <float> c2(4.5,6.9);

    cout << endl << "Caclulator for Integers: " << endl;
    c1.display();

    cout << endl << "Caclulator for Float: " << endl;
    c2.display();
}