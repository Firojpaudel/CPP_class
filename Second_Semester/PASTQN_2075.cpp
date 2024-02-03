#include<iostream>
using namespace std;

class stringmanipulator{
    public:
    static void reverseit(string &str){
        int length = str.length();
        for (int i= 0; i< length/2;i++){
            char temp = str[i];
            str[i]= str[length -i -1];
            str[length -i -1]= temp;
        }
    }
};

int main (){
    string input;
    cout<<"Enter a string: ";
    cin>> input;

    stringmanipulator::reverseit(input);

    cout<<"Rev. string: "<<input<<endl;

    return 0;
}