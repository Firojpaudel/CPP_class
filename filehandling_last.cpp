/*Write a program to read the contents from the binary file made in the previous
Question*/
#include<iostream>
#include<fstream>
using namespace std;
class hello
{
    int x,y;
    public:
    void showdata()
    {
        cout<<"The value of x and y is:"<<endl;
        cout<<x<<endl;
        cout<<y<<endl;
    }
};
int main()
{
    hello m;
    ifstream a;
    a.open("Binary.txt");
    a.read((char*)&m, sizeof(m));
    m.showdata();
    return 0;
}