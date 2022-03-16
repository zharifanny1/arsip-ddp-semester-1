#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int i,j,hasil[4][2];
	int data[4][2]={5,6,3,2,6,8,9,11};
	int data2[4][2]={2,3,1,5,6,8,4,9};
	
	//menampilkan isi matriks
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