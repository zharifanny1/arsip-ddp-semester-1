#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int A[5];
	int B[5];
	int C[5];
	cout<<"Program hitung penjumlaha 2 buah deret"<<endl;
	cout<<"Deret A" <<endl;
	for (int i=0; i<5; i++)
	{
		cout<<"Data A[" <<i<< "]="; cin>>A[i];
	}
	cout<<"Deret B" <<endl;
	for (int i=0; i<5; i++)
	{
		cout<<"Data B[" <<i<< "]="; cin>>B[i];
	}
	for (int i=0; i<5; i++)
	{
		C[i]=A[i]+B[i];
	}
	cout<<"Hasil penjumlaha deret" <<endl;
	for (int i=0; i<5; i++)
	{
		cout<<"C[" <<i<< "]= A["<<i<<"] + B["<<i<<"]=" <<A[i] <<" + " <<B[i] <<"=" << C[i] <<endl;
	}
}
