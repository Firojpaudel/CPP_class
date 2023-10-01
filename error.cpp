/*1.WAP containing a possible exception. Use a try block to throw it and a catch block to handle it properly.*/
#include <iostream>
using namespace std;
int main()
{
	float m,n;
	cout<<"Enter two number:"<<endl;
	cin>>m>>n;
	try
	{
		if (n!=0)
		{
			cout<<"The result of division is  "<<m/n<<endl;
		}
		else
		{
			throw 0;
		}
	}
	catch (int a)
	{
		cout<<"Denominator is zero.So, not divisible"<<endl;
	}
	return 0;
}
