#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

struct mahasiswa
{
	char nama[20];
	int id;
};


void display(mahasiswa s1)
{
	cout<<"Nama : "<<s1.nama<<endl;
	cout<<"ID   : "<<s1.id;
}


struct mahasiswa read();	//fungsi prototype

int main()
{
	mahasiswa mhs;
	strcpy(mhs.nama,"Ahmad"); //inisialisasi variabel
	mhs.id=123456;
	display(mhs);
	cout<<endl<<endl;
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