#include<iostream>
#include<conio.h>
using namespace std;
void tambah2 (int &a)
{
	a=a+2;
}
main()
{
	int x;
	cout<<"Nilai X = ";cin>>x;
	cout<<"Nilai Awal X : "<<x;
	tambah2(x);cout<<endl;
	cout<<"Nilai X Setelah Pemanggilan Fungsi = "<<x;
	getch();
}