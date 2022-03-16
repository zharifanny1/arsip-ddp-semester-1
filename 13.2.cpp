#include<iostream>
using namespace std;
int main()
{
	int *p;
	int x;
	
	p=&x;
	x=1050;
	cout<<"Nilai x Adalah "<<x<<endl;
	cout<<"Nilai *p Adalah "<<*p<<endl;
	cout<<"Nilai p Adalah "<<p<<endl;
	cout<<"Nilai &x adalah "<<&x<<endl<<endl;
	*p=20060;
	cout<<"Nilai x Adalah "<<x<<endl;
	cout<<"Nilai *p Adalah "<<*p<<endl;
	cout<<"Nilai p Adalah "<<p<<endl;
	cout<<"Nilai &x adalah "<<&x<<endl;
	return 0;
}