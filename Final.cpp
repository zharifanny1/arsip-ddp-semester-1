#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	int pilihan,qty[50],price[50],barang1[50],jumlahbarang,total;
	string name[50];
	cout<<"Program Kasir"<<endl;
	cout<<"============="<<endl;
	cout<<"1.Masukkan Barang Belanja"<<endl;
	cout<<"2.Keluar Dan Cetak Struk"<<endl;
	
	menu:
	cout<<"Pilihan : "; cin>>pilihan;
	cout<<endl;
	if(pilihan==1)
	{
		cout<<"Jumlah Barang : ";cin>>jumlahbarang;
		for(int i=0; i<jumlahbarang; i++)
		{
			cout<<"Barang Ke-"<<i+1<<endl;
			cout<<"Nama Barang	: "; cin>>name[i];
			cout<<"Kuantitas	: "; cin>>qty[i];
			cout<<"Harga satuan	: "; cin>>price[i];
			cout<<endl;
			barang1[i]=qty[i]*price[i];
			total+=barang1[i];
			
		}
		
		goto menu;
		cout<<"Tekan 2 Untuk Cetak Struk"<<endl;
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
		for(int i=0; i<jumlahbarang; i++)
		{
			cout<<endl;
			cout<<i+1<<" . "<<qty[i]<<" x "<<name[i]<<"	: "<<barang1[i]<<endl;
			file<<"  Toko Online Sumber Makmur  "<<endl;
			file<<"       Rincian Pesanan       "<<endl;
			file<<"============================="<<endl;
			for(int i=0; i<jumlahbarang; i++)
			{
				file<<i+1<<qty[i]<<" x "<<name[i]<<"	: "<<barang1[i]<<endl<<endl;
			}
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