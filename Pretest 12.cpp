#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct barang
{	
	string kode;
	string nama;
	int hargabeli;
	int hargajual;
	int stok;
};

int main()
{
	barang buku;
	
	buku.kode="123";
	buku.nama="Buku Tulis";
	buku.hargabeli=1500;
	buku.hargajual=2500;
	buku.stok=12;
	
	cout<<"Kode : "<<buku.kode<<endl;
	cout<<"Nama : "<<buku.nama<<endl;
	cout<<"Stok : "<<buku.stok<<endl;
	
	return 0;
}