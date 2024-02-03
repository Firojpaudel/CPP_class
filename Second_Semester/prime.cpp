// WAP to check if given number is prime or not.
#include<iostream>
using namespace std;

int main(){
    int num, i;
    cout<< "Enter a number: ";
    cin >> num;
    int count = 0;
    for (i=1;i<=num;i++){
        if (num%i==0){
            count++;
        }
    }
    if (count == 2){
        cout<< num << " is a prime number.";
    }
    else{
        cout<< "Sorry! "<< num << " is not a prime number.";
    }
}
