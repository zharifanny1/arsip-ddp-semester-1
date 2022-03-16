#include<iostream>
using namespace std;
int main()
{
	struct biodata
	{
		//tipe data dan variabel dikumpulkan disini
		char nama[30], hobi[40], asal[20], sekolah[30];
		int umur, status;
	};
	
	biodata bio;
	//input menggunakan struct
	cout<<"Masukkan Nama Anda      : ";cin.getline(bio.nama,30);
	
	cout<<"Masukkan Hobi Anda      : ";cin.getline(bio.hobi,40);
	
	cout<<"Masukkan Umur Anda      : ";cin>>bio.umur;
	
	cout<<"Masukkan Kota Asal Anda : ";cin>>bio.asal;
	
	cout<<"Masukkan Sekolah Anda   : ";cin>>bio.sekolah;
	
	cout<<"Masukkan Status Anda (1 Apabila Single, 2 Apabila Double) : ";cin>>bio.status;
	
	//output menggunakan struct
	cout<<"\nData Kamu"<<endl;
	cout<<"==========="<<endl;
	cout<<"Nama Saya "				<<bio.nama<<". "<<endl;
	cout<<"Hobi Saya Adalah "		<<bio.hobi<<". "<<endl;
	cout<<"Saya Berusia "			<<bio.umur<<". "<<endl;
	cout<<"Saya Berasal Dari Kota "	<<bio.asal<<". "<<endl;
	
	if (bio.status=1)
	{
		cout<<"Saat Ini Saya Masih Single :(";
	}
	else
	{
		cout<<"Maaf, Sudah Ada Yang Punya :)";
	}
	return 0;
}