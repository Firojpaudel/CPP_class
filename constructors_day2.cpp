
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
    int x;
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