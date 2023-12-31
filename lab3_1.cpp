/*Create a class named 'Programming' while creating an object of a class, if nothing passed to it, then print message "I love C++". If some string is passed, then print the passed string in place of C++ ie print "I love (your passed string)".
*/

#include <iostream>
#include <string>
using namespace std;
    class Programming {
        private:
        string name;
        public:
        Programming() {
            cout << "I love C++ " << endl;
        }
        Programming(string name) {
        cout << "I love " << name;
    }
};
int main() {
    string name;
    cin >> name;
    if (name.length() >1) {
        Programming programming(name);
    } 
    else {
        Programming ();
    }
    return 0;
}