#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,hasil[4][2];
	int data[4][2];
	int data2[4][2];
	
	
	int a,b;
	cout<<"Masukkan Jumlah Baris : ";cin>>a;
	cout<<"Masukkan Jumlah Kolom : ";cin>>b;
	int ar[a][b];
	cout<<"Anda Akan Menggunakan Matrix "<<a<<"x"<<b<<endl;
	cout<<"-----------------------------------------\n"<<endl;
	
	for (int i=0; i<=a-1; i++)
	{
		for (int j=0; j<=b-1; j++)
		{
			cout<<"Masukkan Data Barus Ke-"<<i<<" Kolom Ke-"<<j<<" : ";cin>>ar[i][j];
		}
		if (i==a-1)
		{
			cout<<"===========================================\n";
		}
		else
		{
			cout<<"-------------------------------------------\n";
		}
	}
	
	cout<<"Masukkan Jumlah Baris 2 : ";cin>>a;
	cout<<"Masukkan Jumlah Kolom 2 : ";cin>>b;
	int ar2[a][b];
	cout<<"Anda Akan Menggunakan Matrix "<<a<<"x"<<b<<endl;
	cout<<"-----------------------------------------\n"<<endl;
	
	for (int i=0; i<=a-1; i++)
	{
		for (int j=0; j<=b-1; j++)
		{
			cout<<"Masukkan Data Barus Ke-"<<i<<" Kolom Ke-"<<j<<" : ";cin>>ar2[i][j];
		}
		if (i==a-1)
		{
			cout<<"===========================================\n";
		}
		else
		{
			cout<<"-------------------------------------------\n";
		}
	}
		
	//menampilkan isi matriks
	cout<<"Isi Variabel Data Adalah"<<endl;
	cout<<"------------------------"<<endl;
	cout<<" Matriks 1 | Matriks 2 "<<endl;
	for (i=0; i<4; i++)
	{
		for (j=0; j<a; j++)
		{
			cout<<" "<<ar[i][j]<<" ";
		}
		for (j=0; j<b; j++)
		{
			cout<<" "<<ar[i][j]<<" ";
		}
		cout<<"	   | ";
		for (j=0; j<a; j++)
		{
			cout<<ar2[i][j]<<" ";
		}
		for (j=0; j<b; j++)
		{
			cout<<ar2[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//proses penjumlahan
	
	cout<<"\nHasil Penjumlahan Kedua Matriks"<<endl;
	for (i=0; i<4; i++)
	{
		for (j=0; j<b; j++)
		{
			hasil[i][j]=ar[i][j]*ar2[i][j];
			cout<<" "<<hasil[i][j]<<" ";
		}
		cout<<endl;
	}
	getch();
}