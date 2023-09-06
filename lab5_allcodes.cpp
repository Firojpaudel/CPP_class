// /*Write a program from basic data type to another basic data type.*/
// #include<iostream>
// using namespace std;

// int main (){
//     int x;
//     float y= 1.2344;
//     x=y; //Implicit type conversion 
//     cout<<"The value of x is: "<<x<<endl;
//     x= int(y); //Explicit type conversion
//     cout<<"The Value Of X is:"<<x<<endl;
// }

// /*Write a program for the conversion from basic data type to user
// defined data type.*/
// #include<iostream>
// using namespace std;

// class Temperature{
//     double degrees;
//     public:
//         Temperature() {  //Default Constructor
//             degrees=0.0;
//         }

//         Temperature(double value){
//             degrees = value; // Constructor to convert from double to Temperature
//         }

//         double toF() const{
//             return (degrees *9.0/5.0)+32.0;
//         }
//         void display() const{
//             cout<<"Celcius: "<<degrees<<" and Fahrenhiet: "<< toF()<<endl;
//         }
// };

// int main (){
//     double Cvalue = 25.0;

//     //Converting from double to Temperature using the constructor
//     Temperature tempObj(Cvalue);
//     tempObj.display();

//     return 0;
// }

/*WAP to convert user-defined datatype to another user-defined datatype (destination).*/
#include <iostream>
using namespace std;
//Defining userdefined datatype for Celsius
class Celsius{ //Source Class
    double temperature;
    public:
        Celsius(double temp){
            temperature = temp;  //Constructor definition 
        }

        double getTemp() const{
            return temperature;
        }
};

//Defining userdefined data type for fahrenhiet temperature
class Fahrenhiet{ //Destination Class
    double temperature;
    public:
    Fahrenhiet(double temp){
        temperature= temp;
    }

    double getTemp() const{
        return temperature;
    }
};

//Converting Celsisus to Fahrenhiet
Fahrenhiet CtoF(Celsius c){
    double f= (c.getTemp()*9.0/5.0)+32.0;
    return Fahrenhiet(f);
}

int main (){
    //User input for Celsius 
    double Ctemp;
    cout<<"Enter the temperature in Celsius: ";
    cin>>Ctemp;
    //Celsisus object with the user input of above
    Celsius c(Ctemp);
    //C to F
    Fahrenhiet f=CtoF(c);
    //Display
    cout<<"The converted degree in Fahrenhiet is: "<<f.getTemp()<<endl;
    return 0;
}

// /*WAP to convert user-defined datatype to another user-defined datatype (source).*/
// #include<iostream>
// using namespace std;

// class Celsius{ //destination class
//     double temp1;
//     public:
//     Celsius(){
//         temp1=0;
//     }
//     Celsius(double temp){
//         temp1= temp; //Constructor definition 
//     }
//     void show(){
//         cout<<"Celsius: "<<temp1;
//     }
// };

// class Fahrenheit{ //Source Class
//     double temperature;
//     public:
//     Fahrenheit(double temp){
//         temperature= temp; 
//     }
//     operator Celsius(){
//         return Celsius((temperature- 32.0) * (5.0 / 9.0));
//     }
// };

// int main() {
//     // User input for Fahrenheit
//     double Ftemp;
//     cout << "Enter the temperature in Fahrenheit: ";
//     cin >> Ftemp;

//     Celsius c;
//     Fahrenheit f(Ftemp);
//     c=f;
//     c.show();
// }

// /*WAP to convert user-defined datatype to basic datatype.*/
// #include<iostream>
// using namespace std;
// class dist{
// private:
//     int meter;
//     int centimeter;
// public:
//     dist(){
//         meter=0;
//         centimeter=0;
//     }
//     dist(int m,int cm){
//         meter=m;
//         centimeter=cm;
//     }
//     operator int(){
//         return meter*100+centimeter;
//     }
// };
// int main(){
//     dist d1(2,30);
//     int x=d1;
//     cout << "Distance = " << x << " centimeters" << endl;
//     return 0;
// }



