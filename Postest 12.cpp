#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main()
{
	struct infobuku
	{
		int harga;
		char kode[20],judul[50], penulis[40], penerbit[20];
	};
	
	infobuku buku;
	cout<<"Masukkan Kode Buku     : ";cin.getline(buku.kode,20);
	cout<<"Masukkan Judul Buku    : ";cin.getline(buku.judul,50);
	cout<<"Masukkan Nama Penulis  : ";cin.getline(buku.penulis,40);
	cout<<"Masukkan Nama Penerbit : ";cin.getline(buku.penerbit,20);
	cout<<"Masukkan Harga Buku    : ";cin>>buku.harga;
	
	cout<<endl;
	cout<<"=========================";
	cout<<endl;
	
	cout<<"Kode Buku              : "<<buku.kode<<endl;
	cout<<"Judul Buku             : "<<buku.judul<<endl;
	cout<<"Penulis                : "<<buku.penulis<<endl;
	cout<<"Penerbit               : "<<buku.penerbit<<endl;
	cout<<"Harga                  : "<<buku.harga<<endl;
	
return 0;
}