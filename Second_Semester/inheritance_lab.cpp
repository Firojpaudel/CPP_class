// // Overriding a function 
// #include<iostream>
// using namespace std;

// class College{
//     public:
//     void show(){
//         cout<<"This is College"<<endl;
//     }
// };

// class CSIT: public College{
//     public:
//     void show(){   
//         cout<<"This is CSIT stream"<<endl;
//     }
// };

// int main(){
//     CSIT c;
//     c.show(); //Calling member function from class CSIT
//     c.College::show(); //Accessing class College through class CSIT
//     return 0;
// }

// //WAP with abstract class using concept of "pure" virtual class
// #include<iostream>
// #define pi 3.14159
// using namespace std;

// class Base{  //Base Class aka. abstract class
//     public:
//     virtual double area() =0;//pure virtual function since it's only defined in base class and '= 0' syntax is used
// };

// class Circle: public Base{ //Subclass aka. derived class
//     double radius;
//     public:
//     Circle(double r){ //Constructor
//         radius =r;
//     }

//     double area(){
//         return pi*radius*radius;
//     }
// };

// int main(){
//     Circle c(2.0);
//     cout<<"The area of circle is: "<<c.area()<<endl;

//     return 0;
// }

// //WAP to illustrate the use of virtual function
// #include<iostream>
// using namespace std;

// class animal{
//     public:
//     virtual void makesound() const{ //default virtual function
//         cout<<"Animal sounds: "<<endl;
//     }
// };

// class Dog: public animal{
//     public:
//     void makesound() const{
//         cout<<"Dog: Woff Woff!"<<endl;
//     }
// };

// class Cat: public animal{
//     public:
//     void makesound() const{
//         cout<<"Cat: Meow :)"<<endl;
//     }
// };

// int main(){
//     //Creating objects
//     animal a;
//     Dog d;
//     Cat c;

//     //display
//     a.makesound();
//     d.makesound();
//     c.makesound();

//     return 0;
// }
/*5. WAP to solve ambiguity problem in multipath inheritance with the concept of virtual class.*/
#include<iostream>
using namespace std;

class Person {
public:
    void showdata() {
        cout << "Name = Firoj" << endl;
    }
};

class Employee : virtual public Person {
public:
    void showdata() {
        cout << "Salary = 50,000 " << endl;
    }
};

class Student : virtual public Person {
public:
    void showdata() {
        cout << "ID = 11" << endl;
    }
};

class TuitionTeacher : public Employee, public Student {
public:
    void showdata() {
        Person::showdata();    // Specify the class scope to resolve ambiguity
        Employee::showdata();  // Specify the class scope to resolve ambiguity
        Student::showdata();   // Specify the class scope to resolve ambiguity
        cout << "Course = BSc. CSIT " << endl;
    }
};

int main() {
    TuitionTeacher tt;
    tt.showdata();
    return 0;
}