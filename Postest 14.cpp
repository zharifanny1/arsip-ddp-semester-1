#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int pilihan,qty,price,barang1;
	string name;
	cout<<"Program Kasir"<<endl;
	cout<<"============="<<endl;
	cout<<"1.Masukkan Barang Belanja"<<endl;
	cout<<"2.Keluar Dan Cetak Struk"<<endl;
	
	menu:
	cout<<"Pilihan : "; cin>>pilihan;
	cout<<endl;
	if(pilihan==1)
	{
		cout<<"Nama Barang	: "; cin>>name;
		cout<<"Kuantitas	: "; cin>>qty;
		cout<<"Harga satuan	: "; cin>>price;
		cout<<endl;
		cout<<"Tekan 2 Untuk Cetak Struk"<<endl;
		barang1=qty*price;
		goto menu;
		
	}
	else if(pilihan==2)
	{
		ofstream file ("Struk.txt");
		cout<<endl;
		
		if (!file.is_open())
		{
			cout<<"Tidak Bisa Membuka File"<<endl;
		}
		else
		{
			cout<<endl;
			cout<<qty<<" x "<<name<<"	: "<<barang1<<endl;
			file<<"  Toko Online Sumber Makmur  "<<endl;
			file<<"       Rincian Pesanan       "<<endl;
			file<<"============================="<<endl;
			file<<qty<<" x "<<name<<"	: "<<barang1<<endl<<endl;
			file<<"============================="<<endl;
			file<<"Terima Kasih Sudah Berbelanja"<<endl;
			file<<"============================="<<endl;
			file.close();
		}
	}
	else if(pilihan!=1||2)
	{
		goto menu;
	}
}