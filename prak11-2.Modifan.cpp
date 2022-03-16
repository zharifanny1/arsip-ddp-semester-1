#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<" Pencarian Data Pada Array 2 Dimensi (MATRIX) "<<endl;
	cout<<"=============================================="<<endl;
	int a,b;
	cout<<"Masukkan Jumlah Baris : ";cin>>a;
	cout<<"Masukkan Jumlah Kolom : ";cin>>b;
	char ar[a][b];
	
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
	cout<<"Model Matrix\n";
	for (int i=0; i<=a-1; i++)
	{
		for (int j=0; j<=b-1; j++)
		{
			cout<<ar[i][j]<<"\t";
		}
		cout<<endl;
	}
	char cari; 
	int tot=0;
	cout<<"Masukkan Data Yang Ingin Dicari : ";cin>>cari;
	cout<<"----------------------------------------\n";
	for(int i=0;i<=a-1;i++)
	{
		for (int j=0; j<=b-1; j++)
		{
			if (ar[i][j]==cari)
			{
				cout<<"Data "<<cari<<" Ditemukan Pada Posisi ["<<i<<"] ["<<j<<"]"<<endl;
				tot+=1;
			}
		}
	}
	cout<<"===========================================\n";
	if(tot!=0)
	{
		cout<<"Data "<<cari<<" Berjumlah "<<tot;
	}
	else
	{
		cout<<"Data "<<cari<<" Tidak Ditemukan!!!";
	}
	getch();
}