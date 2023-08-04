/*Create a class named 'Programming' while creating an object of a class, if nothing passed to it, then print message "I love C++". If some string is passed, then print the passed string in place of C++ ie print "I love (your passed string)".
*/

#include<iostream>
#include<string.h>
using namespace std;

class Programming{
    public:
    Programming(){
        cout<<"I love C++"<<endl;
    }
    Programming(string a){
        cin>>a;
        cout<<"I love "<<a<<endl;
    }
};

int main (){
    string a;
    Programming x;
    Programming y(a);
}