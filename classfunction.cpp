#include<iostream>
using namespace std;
class first{
    private: 
        char name[20];
        int age;

    public:
        void getdata(); //member function with definition
            void show();
};
        void first:: getdata()
        {
            cout<<"Enter age";
            cin>>age;
            cout<<"Enter name";
            cin>>name;
        }


void first::show() //member function with definition outside class 
{
    cout<<"Name is: "<<name<<endl;
    cout<<"Age is: "<<age<<endl;
}

int main(){
    first f;
    f.getdata();//inside class
    f.show();//outside class
}