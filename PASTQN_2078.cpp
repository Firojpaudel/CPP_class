#include<iostream>
using namespace std;

class account{
    int acc_no;
    double balance;
    static double min_balance;
    public:
    void getdata(){
      cout<<"Enter account number:";
      cin>>acc_no;
      cout<<"Enter account balance:";
      cin>>balance;
    }
    void displaydata(){
      cout<<"Account number: "<<acc_no<<endl;
      cout<<"Balance: Rs."<<balance<<endl;
    }
    static void displaymin(){
      cout<<"Min balance: "<<min_balance<<endl;
    }
    static void setmin(double min){
      min_balance = min;
    }
};

double account::min_balance = 1000.0;

int main(){
  account a[5];
  //Read data for 5 accounts 
  for (int i= 0; i<5;i++){
    cout<<"Enter details for account: "<<i+1<<endl;
    a[i].getdata();
    cout<<endl;
  }
  //Display data
  for (int i=0;i<5;i++){
    cout<<"Account details for Account "<<i+1<<endl;
    a[i].displaydata();
    cout<<endl;
  }
  //Display min balance
  account::displaymin();
  return 0;
}