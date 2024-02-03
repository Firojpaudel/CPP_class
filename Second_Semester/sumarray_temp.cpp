/*4. Find sum of arrays using function Template*/
#include <iostream>
using namespace std;
template <class A>
A sum(A a[],int len)
{
	int i;
	A sum=0;
	for (i=0;i<len;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
int main()
{
	int l,i;
	cout<<"Enter the length of array:"<<endl;
	cin>>l;
	int a[l];
	float b[l];
	cout<<"Enter the integer members of array:"<<endl;
	for (i=0;i<l;i++)
	{
		cin>>a[i];
	}
	cout<<"The sum of integer array is: "<< sum(a,l)<<endl;
	cout<<endl<<"Enter the floating members of array:"<<endl;
	for (i=0;i<l;i++)
	{
		cin>>b[i];
	}
	cout<<"The sum of float array is: "<<sum(b,l)<<endl;
	return 0;
}
