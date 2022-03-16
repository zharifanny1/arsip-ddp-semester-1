#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	
	cout<<"Tampilan Segitiga"<<endl;
	cout<<"Jumlah Baris: ";cin>>n;
	for (i=0; i<n; i++)
	{
		for (j=1; j<=n-i; j++)
		cout<<" ";
		for (j=1; j<=2*i-1; j--)
		cout<<j;
		cout<<endl;
	}
	
}