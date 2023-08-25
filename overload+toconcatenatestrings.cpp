/* WAP to overload + operator to concatenate two strings*/
#include<iostream>
using namespace std;
class str{
private:
    string name;
public:
    str(){
        name=" ";
    }
    str(string b){
        name=b;
    }
    void getdata() {
        cout << "Enter a string: ";
        cin >> name;
    }
    void show(){
        cout << name;
    }
    str operator +(str a){
        str temp;
        temp.name=name+a.name;
        return temp;
    }
};
int main(){
    str a,b,c;
    a.getdata();
    b.getdata();
    c=a+b;
    c.show();
    return 0;
}
