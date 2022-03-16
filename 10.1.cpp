#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i, total, jum_mhs[7]={32,21,31,46,92,14,92};
	total=0;
	for(i=1; i<7; i++)
	{
		cout<<"Jumlah Mahasiswa Kelas "<<i<<": "<<jum_mhs[i]<<endl;
		total+=jum_mhs[i];
	}
	cout<<"\nJumlah Total Mahasiswa = "<<total;
	getch();
}