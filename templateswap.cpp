/* WAP to swap data using template function.*/
#include <iostream>
using namespace std;
template<class A>
void swap(A *x,A *y)
{
	A temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
int main()
{
	int a,b;
	float c,d;
	char char1,char2;
	cout<<"Enter two integer numbers:"<<endl;
	cin>>a>>b;
	cout<<"Before Swapping:" <<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	swap(&a,&b);
	 cout<<"After Swapping:" <<endl<<"a="<<a<<endl<<"b="<<b<<endl;
	cout<<"Enter two floating numbers:"<<endl;
	cin>>c>>d;
	cout<<"Before Swapping:" <<endl<<"c="<<c<<endl<<"d="<<d<<endl;
	swap(&c,&d);
     cout<<"After Swapping:"       <<endl<<"c="<<c<<endl<<"d="<<d<<endl;
	cout<<"Enter two characters:"<<endl;
	cin>>char1>>char2;
	cout<<"Before Swapping:" <<endl<<"char1="<<char1<<endl<<"char2="<<char2<<endl;
	swap(&char1,&char2);
	cout<<"After Swapping:" <<endl<<"char1="<<char1<<endl<<"char2="<<char2<<endl;
	return 0;
}
