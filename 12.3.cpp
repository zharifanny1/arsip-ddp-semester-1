#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct nilai
{
	int nim;
	int nilai;
};

nilai masuk()
{
	nilai n;
	cout<<"Masukkan NIM   : ";cin>>n.nim;
	cout<<endl;
	cout<<"Masukkan Nilai : ";cin>>n.nilai;
	return n;
}

void tampil(nilai nil)
{
	cout<<"================="<<endl;
	cout<<"NIM   : "<<nil.nim<<endl;
	cout<<"Nilai : "<<nil.nilai<<endl;
}

main()
{
	nilai Nile;
	Nile=masuk();
	tampil(Nile);
	getch;
}