#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int skortes=550;
	int berat=75;
	
	int *pointskor=&skortes;
	int *pointberat=&berat;
	
	cout<<"Skor Adalah					: "<<skortes<<endl;
	cout<<"Berat Adalah					: "<<berat<<endl<<endl;
	
	cout<<"Detail Letak Alamat Memori"<<endl;
	cout<<"Pointer Skor Tersimpan Dalam Memori		: "<<pointskor<<endl;
	cout<<"Pointer Berat Tersimpan Dalam Memori		: "<<pointberat<<endl<<endl;
	
	*pointskor=600;
	cout<<"Skor Setelah Diubah				: "<<skortes<<endl;
	cout<<"Pointer Skor Setelah Diubah Dalam Memori	: "<<pointskor<<endl;
	return 0;
}