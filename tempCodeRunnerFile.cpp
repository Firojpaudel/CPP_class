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