#include <iostream>
#include <conio.h>
using namespace std;

int jumlah_deret (int a)
{
	if (a==0)
	{
		return a;
	}
	else
	{
		return a+jumlah_deret (a-1);
	}
}

main()
{
	int n,hsl;
	cout<<"Nilai N = ";cin>>n;
	hsl=jumlah_deret(n);
	cout<<"Jumlah Deret "<<n<<" = "<<hsl;
}