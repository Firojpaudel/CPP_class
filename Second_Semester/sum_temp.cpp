/*3. Sum of two numbers using function template*/
#include<iostream>
using namespace std;
template<class A, class B>
void sum(A a,B b){
    cout << a << " + " << b << " = " << a+b  << endl;
}
template<class A, class B, class C>
void sum(A a,B b,C c){
    cout << a << " + " << b << " + " << c << " = " << a+b+c << endl;
}
int main(){
    int a,b;
    cout << "Enter two integer numbers: " << endl;
    cin >> a >> b ;
    sum(a,b);

    float c,d,e;
    cout << "Enter three floating numbers: " << endl;
    cin >> c >> d >> e;
    sum(c,d,e);

    return 0;
}