//WAP to find volume where height should be given default argument with value 10

#include<iostream>
using namespace std;

int volume (int l, int b, int h=10){
    float volume;

    volume = l*b*h;
    return volume;
}

int main (){
    int l,b;
    cout<<"Enter the values of length and breadth: ";
    cin>> l >>b;
    cout<< volume(l,b);
}