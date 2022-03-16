/* File program prak10.5 */
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
char cari, kalimat[100];
int a,tot=0;
 cout<<"Program Mencari Data Pada Kalimat\n";
 cout<<"============================================\n";
 cout<<"Masukkan Kalimat : ";
gets(kalimat);
 cout<<"--------------------------------------------\n";
a=strlen(kalimat);
 //input karakter
 cout<<"\nMasukkan data yang ingin anda cari : ";cin>>cari;
cout<<"--------------------------------------------\n";
 for(int i=0;i<a;i++)
{
 if(kalimat[i]==cari)
{
 cout<<"Data "<<cari<<" ditemukan pada urutan ke-"<<i+1<<endl;
 tot+=1;
 }
 }
 cout<<"============================================\n";
 if(tot!=0)
{
 cout<<"Data "<<cari<<" berjumlah "<<tot;
 }
 else
{
 cout<<"Data tidak ditemukan!!!";
 }
 getch();
}