#include <iostream>
#include <math.h>
using namespace std;

int tambah(int a, int b)
{
	int c=a+b;
	return c;
}
int kurang(int d, int e)
{
	int f=d-e;
	return f;
}
int kali(int g, int h)
{
	int i=g*h;
	return i;
}
float bagi(float j, float k)
{
	float l=j/k;
	return l;
}

int main()
{
	int a,b,d,e,g,h;
	float j,k;
	char menu;
	cout<<"PROGRAM KALKULATOR"<<endl;
	cout<<"Menu Operasi"<<endl;
	cout<<"1. Penambahan"<<endl;
	cout<<"2. Pengurangan"<<endl;
	cout<<"3. Perkalian"<<endl;
	cout<<"4. Pembagian"<<endl;
	
	cout<<"Pilih Menu No: ";cin>>menu;
	switch(menu)
	{
		case '1':
			{
				cout<<"Bilangan Pertama\t: ";cin>>a;
				cout<<"Bilangan Kedua\t\t: ";cin>>b;
				int hasiltambah=tambah(a,b);
				cout<<"Hasil "<<a<<" + "<<b<<" = "<<hasiltambah;
				break;
			}
			case '2':
			{
				cout<<"Bilangan Pertama\t: ";cin>>d;
				cout<<"Bilangan Kedua\t\t: ";cin>>e;
				int hasilkurang=kurang(d,e);
				cout<<"Hasil "<<d<<" - "<<e<<" = "<<hasilkurang;
				break;
			}
			case '3':
			{
				cout<<"Bilangan Pertama\t: ";cin>>g;
				cout<<"Bilangan Kedua\t\t: ";cin>>h;
				int hasilkali=kali(g,h);
				cout<<"Hasil "<<g<<" * "<<h<<" = "<<hasilkali;
				break;
			}	
			case '4':
			{
				cout<<"Bilangan Pertama\t: ";cin>>j;
				cout<<"Bilangan Kedua\t\t: ";cin>>k;
				int hasilbagi=bagi(j,k);
				cout<<"Hasil "<<j<<" / "<<k<<" = "<<hasilbagi;
				break;
			}
			default:
				break;
	}
}