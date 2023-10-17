/*3. WAP to read content from a text file OUT.TXT and count the number of alphabets present in it.*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int c = 0;
    char x;
    ifstream file;
    file.open("OUT.txt");
    cout << "String in file : ";
    while (file.get(x)){
        cout << x;
        if(x >= 'A' && x <= 'Z' || x >='a' && x <='z')
        c++;
    }
    file.close();
    cout << "Total number of alphabets : " << c << endl;
    return 0;
}