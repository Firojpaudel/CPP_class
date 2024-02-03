/* Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some 
more amount to it. Create a class ‘addamount’ with an initial value of 50. Now make two 
constructor showing,
➢ No amount will be added to the Piggie Bank.
➢ Having a parameter which is the amount that will be added to the Piggie Bank.
Copy this amount and store it in another object after adding the amount and display final 
amount through copied object.*/
#include<iostream>
using namespace std;

class addamount{
    private:
        int a;
        int balance = 50;   // Initial balance is 50
    public:
        addamount(){        // Default Constructor adding no amount to the Piggie Bank   
        }
        addamount(int a){   // Constructor to add the amount to existing balance
            balance += a;   
        }
        void deposit(int a) {
            if (a > 0) {
                cout << a << " is added to the Piggy Bank" << endl;
            } 
            else {
                cout << "No amount will be added to the Piggy Bank." << endl;
            }
        }
        int total(){
            return balance;
        } 
};
int main(){
    int a;
    cout << "Enter the amount to be added in a Piggie Bank : ";
    cin >> a;
    addamount s1(a);        //Created an object with the input amount which calls the constructor
    addamount s2 =s1;       //Created a copy of the object s1
    s2.deposit(a);          // Deposits the input amount into the copied object
    cout << "Total amount in Piggy Bank: " << s2.total();   //Displays the total balance    
}