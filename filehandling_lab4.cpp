/*4. WAP to write and read values using variables in/from a file. */
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[30];
    int roll;
    fstream file;
    file.open("Data.txt",ios::out);
    cout << "Enter a name: ";
    cin >> name;
    file << name << endl;

    cout << "Enter roll number: ";
    cin >> roll;
    file << roll << endl;
    file.close();

    file.open("Data.txt",ios::in);
    file >> name;
    file >> roll;

    cout << "Name: " << name << endl;
    cout << "Roll Number: " << roll << endl;
    file.close();
    return 0;
}