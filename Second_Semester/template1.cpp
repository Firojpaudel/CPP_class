/*WAP to find largest among two numbers using function template.*/
#include <iostream>
using namespace std;
template <class A>
void larger(A x,A y)
{
	if (x>y)
	cout<<x<<" is the larger number."<<endl;
	else if (x<y)
	cout<<y<<" is the larger number."<<endl;
	else
	cout<<x<<" and"<< y<<" are equal."<<endl;
}
int main()
{
	int x,y;
	cout<<"Enter two integer numbers:"<<endl;
	cin>>x>>y;
	larger(x,y);
	float a,b;
	cout<<endl<<"Enter two floating numbers:"<<endl;
	cin>>a>>b;
	larger(a,b);
	return 0;
}
