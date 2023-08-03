
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


//Parameterized constructor 
#include<iostream>
using namespace std;

class test{
    int x,y;
    public:
    test(int a,int b){
        cout<<"Enter x and y";
        cin>>x>>y;
        cout<<x<<y;
    }
};

int main (){
    int x,y;
    // test (x,y);
    //OR
    test t = test(x,y);
}