#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	
	char nama[4]={'a','g','u','s'};
	string alamat[5]={"Dukuh Sukahati","Kelurahan Damai","Kecamatan Tenangraya","Kabupaten Gunungkidul","Propinsi DIY"};

	cout <<"Nama=";
	for (int i=0; i<4; i++)
	{
		cout<<nama[i];
	}
	cout<<endl;
	cout<<"Alamat:" <<endl;
	for (int i=0; i<5; i++)
	{
		cout<<alamat[i]<<endl;
	}
}