#include<iostream>
using namespace std;
int output(int &a, int b,int c)
{
	{
		cout<<"Jumlah : "<<a<<endl;
		output(a, b+1, c);
	}
	int n;
	cout<<"Bulan Ke "<<b<<" Pendapatan : ";cin>>n;
	a=a+n;
	if (b<c)

}

int main()
{
	int a, hasil=0;
	cout<<"Jumlah Bulan : ";cin>>a;
	output(hasil,1,a);
	cout<<"Jumlah : "<<hasil;
	return 0;
}