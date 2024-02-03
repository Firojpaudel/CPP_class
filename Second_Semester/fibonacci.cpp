// WAP to find fibonacci series upto nth term using recursive function

#include<iostream>
using namespace std;

int fibonacci(int n){ //this is the recursive function to find fibonaccii series 
    if (n<=1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

// Now writing function to display Fibonacci series upto nth term 

int displayfibo(int n)
{
    cout<< "Fibonacci Series up to "<< n << "terms: ";
    for (int i= 0; i<n; i++){
        cout << fibonacci(i) << " ";
    }
    cout<< endl;
    return 0;
}

// Now the main function

int main (){
    int n; 
    cout<< "Enter the value of n for fibonacci series: ";
    cin>> n;

    if (n<=0){
        cout << "Invalid input! Enter a positive number greater than 0";
    }
    else{
        displayfibo(n);
    }
    return 0;
}