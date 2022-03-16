#include<iostream>
#include<conio.h>
using namespace std;

int penghasilan(int a)
{
	if (a==0)
	{
		return a;
	}
	else
	{
		if (a%2==1)
		return a+penghasilan (a-1);
		else
		return penghasilan (a-1);
	}
}

main()
{
	int n,hsl;
	cout<<"Nilai N=";cin>>n;
	hsl=penghasilan(n);
	cout<<"Jumlah Deret Bilangan Genap "<<n<<"="<<hsl;
}