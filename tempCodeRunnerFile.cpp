/*WAP to convert user-defined datatype to another user-defined datatype (source).*/
#include<iostream>
using namespace std;

class Celsius{ //destination class
    double temp1;
    public:
    Celsius(){
        temp1=0;
    }
    Celsius(double temp){
        temp1= temp; //Constructor definition 
    }
    void show(){
        cout<<"Celsius: "<<temp1;
    }
};

class Fahrenheit{ //Source Class
    double temperature;
    public:
    Fahrenheit(double temp){
        temperature= temp; 
    }
    operator Celsius(){
        return Celsius((temperature- 32.0) * (5.0 / 9.0));
    }
};

int main() {
    // User input for Fahrenheit
    double Ftemp;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> Ftemp;

    Celsius c;
    Fahrenheit f(Ftemp);
    c=f;
    c.show();
}