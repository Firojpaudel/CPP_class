#include <iostream>
#include<string>
using namespace std;

class author{
    string name;
    string quali;
    public:
    void getdata(){
        cout<<"Enter authors name: ";
        getline(cin,name);
        cout<<"Enter his qualification: ";
        getline(cin,quali);
    }
    void putdata(){
        cout<<"Authors name: "<<name<<endl;
        cout<<"Authors qualification: "<<quali<<endl;
    }
};

class publication{
    string pname; 
    public:
    void getdata(){
        cout<<"Enter the publications name: ";
        getline(cin, pname);
    }
    
    void putdata(){
        cout<<"The publications name is: "<<pname<<endl;
    }
};

class book : public author, public publication{
    string title;
    double price;
    public:
    void getdata(){
        author::getdata();
        publication::getdata();
        cout<<"Enter the title of Book: ";
        getline(cin, title);
        cout<<"Enter the book's price: ";
        cin>>price;
    }
    void putdata(){
        author::putdata();
        publication::putdata();
        cout<<"The book's title is: "<<title<<endl;
        cout<<"The books price is: "<<price<<endl;
    }
};

int main(){
    book b;
    cout<<"Enter book details: \n";
    b.getdata();
    cout<<"Book details: ";
    b.putdata();
}