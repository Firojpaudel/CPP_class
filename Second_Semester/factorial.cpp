// WAP to find factorial of a number using function

#include <iostream>
using namespace std;

int facto (int); // function declaration

int main ()
{
    int i, num;
    cout<< "Enter a number: ";
    cin>> num;
    cout<< facto(num); //function calling
    return 0;
}

int facto (int num){ //function definition
    if (num <=1){
        return 1;
    }
    else{
        return num*facto(num-1);
    }
}