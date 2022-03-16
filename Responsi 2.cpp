#include <iostream>
using namespace std;
int main()
{
	int nomor,hrg,qty,total,bayar,kembali;
	char back;
	menu:
	do
	{
	cout<<"----------------------------------------- "<<endl;
	cout<<"|	Menu Makanan		|	Harga		|"<<endl;
	cout<<"|	1.Ikan Goreng		|	Rp. 10.000	|"<<endl;
	cout<<"|	2.Ayam Goreng		|	Rp. 12.000	|"<<endl;
	cout<<"|	3.Nasi Tiwul		|	Rp. 10.000	|"<<endl;
	cout<<"|	4.Ikan Bakar		|	Rp. 15.000	|"<<endl;
	cout<<"|	5.Nasi Putih		|	Rp. 8.000	|"<<endl;
	cout<<"|	6.Jus Jeruk		|	Rp. 5.000	|"<<endl;
	cout<<"|	7.Teh Manis		|	Rp. 2.000	|"<<endl;
	cout<<"------------------------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Pilihan Anda : ";cin>>nomor;
    switch (nomor)
    {
    case 1:
    cout<<'\n'<<"Ikan Goreng"<<endl;
    hrg=10000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 2:
    cout<<'\n'<<"Ayam Goreng"<<endl;
    hrg=12000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 3:
    cout<<'\n'<<"Nasi Tiwul"<<endl;
    hrg=10000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 4:
    cout<<'\n'<<"Ikan Bakar"<<endl;
    hrg=15000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 5:
    cout<<'\n'<<"Nasi Putih"<<endl;
    hrg=8000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 6:
    cout<<'\n'<<"Jus Jeruk"<<endl;
    hrg=5000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
    
    case 7:
    cout<<'\n'<<"Teh Manis"<<endl;
    hrg=2000;
    cout<<"Masukan Jumlah Porsi : ";cin>>qty;
    total=hrg*qty;
    cout<<"Total Hargany        : Rp. "<<total<<endl;
    cout<<"Dibayar              : Rp. ";cin>>bayar;
    kembali=bayar-total;
    cout<<"Kembali              : Rp."<<kembali<<endl;
    cout<<""<<endl;
    cout<<"Masih Ada Yang Lain Y/T : ";cin>>back;
    break;
}
}

 while (back/='Y');
 cout<<"Terima Kasih Atas Kunjungan Anda Di LBI Pacitan";
 return 0;
}