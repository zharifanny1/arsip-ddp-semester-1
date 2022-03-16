#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	cout<<"Array Data Mahasiswa"<<endl;
	cout<<"======================\n"<<endl;
	int n;
	cout<<"Jumlah Data=";cin>>n;
	string mahasiswa[n][3];
	for (int i=0; i<n; i++)
	{
		cout<<"Data Ke-"<<i<<endl;
		for (int j=0; j<3; j++)
		{
			if (j==0)
			cout<<"NIM  =";
			else if (j==1)
			cout<<"Nama =";
			else
			cout<<"Prodi=";cin>>mahasiswa[i][j];
		}
	}
	cout<<"Data Mahasiswa yang disimpan"<<endl;
	cout<<"No.	NIM		Nama	Prodi"<<endl;
	
	for (int i=0; i<n; i++)
	{
		cout<<i<<"	"<<mahasiswa[i][0]<<"	"<<mahasiswa[i][1]<<"	"<<mahasiswa[i][2]<<endl;
	}
	getch();
}