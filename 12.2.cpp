#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct mahasiswa
{
	char nama[20];
	int id;
};

	//fungsi prototype

int main()
{
	struct mahasiswa mhs;
	mhs=read();				//memanggil fungsi read
	cout<<"Nama: "<<mhs.nama;
	cout<<"\nID: "<<mhs.id;
	getch();
}

struct mahasiswa read()
{
	struct mahasiswa s1;
	cout<<"Masukkan Nama  : ";cin>>s1.nama;
	cout<<"Masukkan ID    : ";cin>>s1.id;
	cout<<endl;
	return s1;
}