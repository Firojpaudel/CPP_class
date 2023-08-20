/* 5. WAP overloading <= operator which in turn can be used for user defined object for a class "distance" to compare two distance objects.*/
#include<iostream>
using namespace std;
class dist {
public:
    int dis;
    int op;
    dist() {
        dis = 0;
        op = 0;
    }
    void getdistance() {
        cout << "Enter the distance: ";
        cin >> dis;
    }
    dist operator<=(dist b) {
        if (dis == b.dis) {
            op = 0;
        } else if (dis > b.dis) {
            op = 1;
        } else {
            op = -1;
        }
        return *this;
    }
};
int main() {
    dist d1, d2, d3;
    d1.getdistance();
    d2.getdistance();
    d3 = d1 <= d2;

    if (d3.op == 0) {
        cout << "Both distance are equal." << d1.dis << endl;
    } else if (d3.op == 1) {
        cout << "First distance is greater than the second, i.e. " << d1.dis << " > " << d2.dis << endl;
    } else {
        cout << "Second distance is greater than the first, i.e. " << d2.dis << " > " << d1.dis << endl;
    }
    return 0;
}
