/*6. WAP demonstrating example of tellg(), tellp(), seekg(), seekp().*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("file.txt", ios::in | ios::out | ios::trunc);

    // Write data to the file
    file << "C++ file handling" << endl;
    file << "OOP practicals." << endl;

    // Get and display the current positions of the input and output file pointers
    cout << "Initial positions:" << endl;
    cout << "Input Position: " << file.tellg() << endl;
    cout << "Output Position: " << file.tellp() << endl;

    // Seek to the beginning of the file
    file.seekg(0, ios::beg);
    file.seekp(5, ios::beg);

    // Read from the current input position
    string line;
    getline(file, line);
    cout << "Read from input position: " << line << endl;

    // Seek to the end of the file
    file.seekp(0, ios::end);

    // Write more data to the end of the file
    file << "Appending data at the end." << endl;

    // Get and display the updated positions of the input and output file pointers
    cout << "Updated positions:" << endl;
    cout << "Input Position: " << file.tellg() << endl;
    cout << "Output Position: " << file.tellp() << endl;
    file.close();
    return 0;
}