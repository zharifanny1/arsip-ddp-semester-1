#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<" Perkalian Dua Data Array 2D (Matriks)"<<endl;
	cout<<"======================================"<<endl;
	int a,b;
	int x,y;
	int i,j;
	cout<<"Masukkan Jumlah Baris : ";cin>>a;
	cout<<"Masukkan Jumlah Kolom : ";cin>>b;
	int ar[a][b];
	int ar2[a][b];
	int hasil[a][b];
	cout<<"Anda Akan Menggunakan Matriks"<<a<<"x"<<b<<endl;
	cout<<"-----------------------------";
	cout<<"Matriks 1 !!"<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<"Masukkan Data Baris Ke-"<<i<<" Kolom Ke-"<<j<<":";cin>>ar[i][j];
		}
		if(i==a-1)
		{
			cout<<"========================================";
		}
		else
		{
			cout<<"----------------------------------------";
		}
	}
	cout<<"Matriks 2 !!"<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<"Masukkan Data Baris Ke-"<<i<<" Kolom Ke-"<<j<<" : "<<j<<" : ";cin>>ar2[i][j];
		}
		if(i==a-1)
		{
			cout<<"========================================";
		}
		else
		{
			cout<<"----------------------------------------";
		}
	}
	cout<<"Model Matriks 1\n";
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<" "<<ar[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"----------------------------------------";
	cout<<"Model Matriks 2\n";
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			cout<<" "<<ar2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"========================================";
	cout<<"Hasil Perkalian Matriks";
	cout<<endl;
	for(int i=0;i<a;i++)
	{
		for(int j=0;j<b;j++)
		{
			hasil[i][j]=ar[i][j]*ar[i][j];
			cout<<" "<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
}