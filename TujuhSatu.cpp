#include <iostream>
using namespace std;
int main()
{
	int a,b,panjang=5;
	for (a=1;a<=panjang;a++)
	{
		for (b=1;b<=panjang;b++)
		{
			cout<<b++<<" ";
		}
		cout<<endl;
	}
}
