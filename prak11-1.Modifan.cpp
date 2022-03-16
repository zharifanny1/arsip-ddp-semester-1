#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,hasil[4][2];
	int data[4][2];
	int data2[4][2];
	
	cout<<"Masukkan Nilai Matriks 1"<<endl;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"Baris Ke "<<i<<" Kolom Ke "<<j<<" = ";cin>>data[i][j];
		}
	}
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<2; j++)
		{
			cout<<"Baris Ke "<<i<<" Kolom Ke "<<j<<" = ";cin>>data2[i][j];
		}
	}	
	
	cout<<"Isi Variabel Data Adalah"<<endl;
	cout<<"------------------------"<<endl;
	cout<<" Matriks 1 | Matriks 2 "<<endl;
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			cout<<" "<<data[i][j]<<" ";
		}
		cout<<"	   | ";
		for (j=0; j<2; j++)
		{
			cout<<data2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//proses penjumlahan
	
	cout<<"\nHasil Penjumlahan Kedua Matriks"<<endl;
	for (i=0; i<4; i++)
	{
		for (j=0; j<2; j++)
		{
			hasil[i][j]=data[i][j]+data2[i][j];
			cout<<" "<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
}