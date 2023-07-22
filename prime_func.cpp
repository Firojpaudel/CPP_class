//  WAP to check whether the number is prime or not using a function

#include<iostream>
using namespace std;

bool is_prime(int num){ //function declaration + definition
    if (num<=1)
        return false;
    
    for (int i=2;i*i <= num; i++){
        if (num%i ==0){
            return false;
        }
    }
}

int main(){
    int num;
    cout<<"Enter a number: ";
    cin>> num;

    if (is_prime(num)){ //function calling
        cout<< num<<" is a prime number! ";
    }
    else{
        cout<< num<< " is not a prime number :( ";
    }
}
