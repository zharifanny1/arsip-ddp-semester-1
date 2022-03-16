#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
struct barang
{	
	string nama,barang,struktur;
	int id,hargabeli,hargajual,stok;
};
void display(barang display)
{
	cout<<"Kode : "<<display.kode<<endl;
	cout<<"Nama : "<<display.nama;
	
}
int main()
{
	mahasiswa mhs;
	strcpy(mhs.nama, "Ahmad");
	mhs.id=123456;
	display(mhs);
	getch();
}
