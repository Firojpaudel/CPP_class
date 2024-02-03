
//Default constructor 
// #include<iostream>
// using namespace std;

// class test{
//     int x,y;
//     public:
//     test(){
//         cout<<"Enter x and y";
//         cin>>x>>y;
//         cout<<x<<y;
//     }
// };

// int main (){
//     test t;
// }


// //Parameterized constructor 
// #include<iostream>
// using namespace std;

// class test{
//     int x,y;
//     public:
//     test(int a,int b){
//         cout<<"Enter x and y";
//         cin>>x>>y;
//         cout<<x<<y;
//     }
// };

// int main (){
//     int x,y;
//     test t1 (x,y);
//     //OR
//     test t = test(x,y);
// }

//Copy constructor
 #include<iostream>
using namespace std;

class test{
    int x,y;
    public:
    test(){
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    test (test &t)
    {
        cout<<t.x;
    }
};

int main (){
    test t1;
    test t2=t1;
    //OR
    // test t2(t1);
}

//Constructor Overloading::
#include <iostream>
#include <string>

class MyClass {
private:
    int num;
    std::string name;

public:
    // Default Constructor
    MyClass() : num(0), name("Default") {}

    // Parameterized Constructor
    MyClass(int number, const std::string& str) : num(number), name(str) {}

    // Copy Constructor
    MyClass(const MyClass& other) : num(other.num), name(other.name + "_copy") {}

    // Display function
    void display() const {
        std::cout << "Number: " << num << ", Name: " << name << std::endl;
    }
};

int main() {
    // Using Default Constructor
    MyClass obj1;
    std::cout << "Default Constructor Output: ";
    obj1.display();

    // Using Parameterized Constructor
    MyClass obj2(42, "Parameterized");
    std::cout << "Parameterized Constructor Output: ";
    obj2.display();

    // Using Copy Constructor
    MyClass obj3 = obj2; // Alternatively, MyClass obj3(obj2);
    std::cout << "Copy Constructor Output: ";
    obj3.display();

    return 0;
}

