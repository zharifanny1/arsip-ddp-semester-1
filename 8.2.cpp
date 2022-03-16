#include <iostream>
#include <math.h>

using namespace std;
int main()
{
	int a,b;
	cout<<"Nilai A= ";cin>>a;
	cout<<"Nilai B= ";cin>>b;
	cout<<"Nilai Terbesar Antara A Dan B="<<fmax(a,b)<<endl;
	cout<<"Nilai Terkecil Antara A dan B="<<fmin(a,b)<<endl;
	cout<<"A Pangkat B ("<<a<<"^"<<b<<")="<<pow(a,b)<<endl;
	return 0;
}