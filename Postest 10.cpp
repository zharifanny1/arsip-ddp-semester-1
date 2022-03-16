#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int bil[10];
	for(int i=0; i<10; i++)
	{
		cout<<"Bilangan "<<i+1<<":";cin>>bil[i];
	}
	cout<<"Bilangan Genap : ";
	for(int i=0;i<10;i++)
	{
		if(bil[i] % 2 == 0)
		{
			cout<<bil[i]<<" ";
		}
	}
	cout<<endl;
	cout<<"Bilangan Ganjil : ";
	for(int i=0; i<10; i++)
	{
		if (bil[i] % 2 == 1)
		{
			cout<<bil[i]<<" ";
		}
	}
	return 0;
}