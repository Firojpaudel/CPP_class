#include <iostream>
using namespace std;
int main() 
{
	double a,b,arr[4] = { };
	int index;
	cout << "Enter array index: ";
	cin >> index;
try {
	if (index < 0 || index > 4)
		throw "Array out of bounds!";
		cout << "Enter numerator and denominator: ";
		cin >> a >> b;
	if (b == 0)
		throw 0;
		cout << a / b << endl;
	} 
	catch (const char* msg) {
	cout << msg << endl;
} 
catch (int num){
	cout << "Error: Cannot divide by " << num << endl;
}
return 0;
}

