/*3. WAP that uses catch(...) handler.*/
#include <iostream>
using namespace std;
int main() {
    try {
        int choice;
        cout << "Enter 1 for an integer exception, 2 for a character exception: ";
        cin >> choice;
        if (choice == 1) {
            throw 42; 
        } else if (choice == 2) {
            throw 'a'; 
        } else {
            throw "Unknown"; 
        }
    } catch (int a) {
        cout << "Integer catch. Value: " << a << endl;
    } 
    catch (char c) {
        cout << "Character catch. Value: " << c << endl;
    } 
    catch (...) {
        cout << "Default catch." << endl;
    }
    return 0;
}