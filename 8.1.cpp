#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	char info[30];
	strcpy(info, "UNIVERSITAS AHMAD DAHLAN"); /*fungsi dari string.h*/
	cout<<info<<endl;
	cout<<"Panjang Karakter="<<strlen(info); /*fungsi dari string.h*/
	cout<<"\n";
	return 0;
	
}