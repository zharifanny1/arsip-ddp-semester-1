#include<iostream>
using namespace std;
int main()
{
	int x, *y;
	y=new int;
	x=23;
	*y=94;
	cout<<"Nilai x = "<<x<<endl;
	cout<<"Alamat Memori x = "<<&x<<endl;
	cout<<"Nilai y = "<<y<<endl;
	delete y;
	cout<<"Setelah di-delete, nilai y adalah "<<*y<<endl;
	cout<<"Alamat memori y adalah "<<y<<endl;
	return 0;
}