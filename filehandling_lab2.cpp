/*2. WAP which initializes a string variable to the content "Time is a great teacher but nowadays it is said as Time is Money"
and outputs the string to disk file OUT.TXT*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    string a = "Time is a great teacher but nowadays it is said as Time is money";
    ofstream file;
    file.open("OUT.txt");
    file << a << endl; 
    file.close();
    return 0;
}