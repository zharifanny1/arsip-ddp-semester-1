#include<iostream>
using namespace std;
int panda(int &a, int b,int c)
{
	int n;
	cout<<"Bulan Ke "<<b<<" Pendapatan : ";cin>>n;
	a=a+n;
	if (b<c)
	{
		cout<<"Jumlah : "<<a<<endl;
		panda(a, b+1, c);
	}
}

int main()
{
	int a, hasil=0;
	cout<<"Jumlah Bulan : ";cin>>a;
	panda(hasil,1,a);
	cout<<"Jumlah : "<<hasil;
	return 0;
}