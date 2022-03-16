#include <iostream>
using namespace std;
int Faktorial(int input)
{
	int hitung = 1;
	for(int i=1; i<=input; i++)
{
	hitung = hitung * i;
}
return hitung;
}
	int main()
{
	int angka;
	cout << "masukan angka: ";
	cin >> angka;
	cout << angka << "! = " << Faktorial(angka);
	return 0;
}
                                                                                                                                                                                                                       