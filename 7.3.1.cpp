#include <iostream>
using namespace std;
int main()
{
	int i,j,k,n=5;
	
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for (j=1;j<=i;j++)
		{
			cout<<j;
		}
		for (k=i-1;k>=1;k--)
		{
			cout<<k;
		}
		cout<<endl;
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for (j=1;j<=n-i;j++)
		{
			cout<<j;
		}
		for (k=n-i-1;k>=1;k--)
		{
			cout<<k;
		}
		cout<<endl;
	}
}