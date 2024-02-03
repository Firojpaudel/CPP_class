/*WAP to overload unary operators i.e., increment and decrement.*/
#include<iostream>
using namespace std;
class counter{
private:
    int count;
public:
    counter(){
        count=0;
    }
    void display(){
        cout << "Count: " << count << endl;
    }
    void operator ++(){     
        ++count;
    }
    void operator ++ (int){     
        count++;
    }
    void operator --(){     
        --count;
    }
    void operator -- (int){     
        count--;
    }
};
int main(){
    counter c;             
    c.display();       
    ++c; 
    c.display();       
    c++;                 
    c.display();  
    --c;
    c.display();           
    c--;                
    c.display();   
    return 0;    
}