#include<iostream>
#include<conio.h>
using namespace std;
int pangkat(int a, int b)
{
	int hasil,i;
	hasil=1;
	for (i=1; i<=b; i++)
	hasil*=a;
	return hasil;
}
main()
{
	int x,y,hsl;
	cout<<"Nilai X = ";cin>>x;
	cout<<"Nilai Y = ";cin>>y;
	hsl=pangkat(x,y);
	cout<<x<<" Pangkat "<<y<<"="<<hsl;
}