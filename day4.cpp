//Using friend function

#include<iostream>
using namespace std;

class friendfun
{
    int x,y;
    public:
    void getdata()
    {
        cout<<"Enter x and y: ";
        cin>>x>>y;
    }
    friend friendfun show (friendfun a);
};
friendfun show(friendfun a)
{
    cout<<a.x<<endl<<a.y;
    return a;
}

int main (){
    int c;
    friendfun a;
    a.getdata();
    show(a);
    return 0;
}