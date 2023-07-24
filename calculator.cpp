// Create a calculator using switch statement 

#include <iostream>
using namespace std;

int main (){
    double num1, num2;
    char op; //operation

    cout << "Enter the operation (+,-,*,/); ";
    cin>>op;

    cout << "Enter the first number: ";
    cin >> num1;

    cout<<"Enter the second number: ";
    cin>> num2;

    double result;

    switch (op){
        case '+': {
            result = num1 + num2;
            break;
        }
        case '-': {
            result= num1 - num2;
            break;
        }
        case '*': {
            result= num1 * num2;
            break;
        }
        case '/': {
            result= num1/num2;
            break;
        }
        default: {
            cout<<"Invalid operation! "<<endl;
            break;
        }
    }

    cout<<"The output is: "<< result<< endl;
    return 0;

}