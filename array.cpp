#include <iostream>
using namespace std;
int swap(int *x,int y,int &z)
{
	int temp;
	temp=*x;
	*x=y;
	y=temp;
	z=temp;
	return *x,y,z;
}
int main()
{
	int a;int b ;int c;
	a=10;
	b=15;
	c=20;
	
	swap(&a,b,c);
	cout<<"First no is "<<a<<endl;
	cout<<"Second no is "<<b<<endl;
	cout<<"Third no is "<<c<<endl;
	return 1;
}
