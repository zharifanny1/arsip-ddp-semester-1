#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
	int pilihan,qty[50],price[50],barang1[50],jumlahbarang,total;
	string name[50];
	cout<<"Program Kasir"<<endl;
	cout<<"============="<<endl;
	cout<<"1.Masukkan Barang Belanja"<<endl;
	cout<<"2.Cetak Struk"<<endl;
	cout<<"3.Cek Kode Promo"<<endl;
	cout<<"4.Cek Alamat Memory Sistem"<<endl;
	
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
		{
			cout<<endl;
			cout<<"  Toko Online Sumber Makmur  "<<endl;
			cout<<"       Rincian Pesanan       "<<endl;
			cout<<"============================="<<endl;
			for(int i=0; i<jumlahbarang; i++)
			{
				cout<<i+1<<" . "<<qty[i]<<" x "<<name[i]<<"	: "<<barang1[i]<<endl;
			}
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
		goto menu;
	}
	else if(pilihan==4)
	{
	int *pointqty=&qty[50];
	int *pointprice=&price[50];
	
	cout<<"Data Alamat Memory Kuantitas				: "<<qty<<endl;
	cout<<"Data Alamat Memory Harga 				: "<<price<<endl;
	
	cout<<"Detail Letak Alamat Memori"<<endl;
	cout<<"Pointer Kuantitas Tersimpan Dalam Memori		: "<<pointqty<<endl;
	cout<<"Pointer Berat Tersimpan Dalam Memori			: "<<pointprice<<endl<<endl;
	goto menu;
	
	}
	else if (pilihan==3) //kita periksa kode promo 
	{
		int kodepromo[8][8]={{7,4,8,2,1,9,3,2},{2,1,2,3,5,3,7,3,},{9,5,4,2,0,1,2,9},{3,3,2,5,9,5,1,0},{1,8,6,4,8,8,3,2},{2,1,8,4,8,3,6,2},{6,3,4,6,7,4,2,8},{0,5,1,4,8,4,2,6}};
	
		for(int b=0;b<8;b++)
		{
		
			for(int k=0;k<8;k++)
			{
			cout<<kodepromo[b][k]<<" ";
			}
			cout<<endl;
		}
		goto menu;
	}

	else if(pilihan!=1||2||3||4)
	{
		return 0;
	}
}
//2022; khindy zharifany/forssellfritz