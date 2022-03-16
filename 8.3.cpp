#include<iostream>
#include<conio.h>
using namespace std;

/*fungsi untuk mencetak garis dengan panjang n karakter*/

void cetakgaris(int n)
{
	int i;
	for(i=1;i<=n;i++)
	cout<<"FX";cout<<"\n";
}
main()
{
	cetakgaris(300); //pemanggilan fungsi
	getch();
}