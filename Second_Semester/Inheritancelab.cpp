/*Create two classes named mammals and marine animal. Create another class named blue whale which inherits both the above classes. Now, create a function in each of these classes which prints "I am Mammal", "I am marine animal" and "I belong to both categories." respectively. Now, create an object for each of the above class and try calling 
i. function of mammals by object of Mammal 
ii. function of marine_animal by object of marine_animal
iii. function if blue_whale by the object of blue_whale
iv. function of each of it's parent by object of blue_whale.
*/

#include<iostream>
using namespace std;

class Mammal{
    public: 
    void print_mammal(){
        cout<<"I am Mammal"<<endl;
    }
};

class marine_animal {
    public: 
    void print_marine(){
        cout<<"I am marine animal"<<endl;
    }
};

class blue_whale : public Mammal, public marine_animal{ //Since it belongs to both places
    public:
    void print_whale(){
        cout<<"I belong to both categories"<<endl;
    }
};

int main (){
    Mammal mammal_object;
    marine_animal marine_object;
    blue_whale whale_object;

    //function calling
    mammal_object.print_mammal();
    marine_object.print_marine();
    whale_object.print_whale(); //belongs to both

    //Now accessing both classes using whale object 
    whale_object.print_mammal();
    whale_object.print_marine();

    return 0;
}