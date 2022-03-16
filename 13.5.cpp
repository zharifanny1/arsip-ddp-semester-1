#include<iostream>
using namespace std;
int main()
{
	int nilai1=2, nilai2=4;
	int *p1, *p2;
	
	p1=&nilai1; 							//p1 itu alamat nilai1
	p2=&nilai2;								//p2 itu alamat nilai2
	
	cout<<"Nilai Awal"<<endl;
	cout<<"Nilai 1 Adalah "<<nilai1<<endl;
	cout<<"Nilai 2 Adalah "<<nilai2<<endl<<endl;
	
	*p1=10;									//nilai alamat yg ditunjuk yaitu p1=10
	cout<<"Setelah *p1 = 10"<<endl;
	cout<<"Nilai 1 Adalah "<<nilai1<<endl;
	cout<<"Nilai 2 Adalah "<<nilai2<<endl<<endl;
	
	*p2=*p1;								//nilai alamat p2 itu sama dengan nilai alamat p1 bor
	cout<<"Setelah *p2 = *p1"<<endl;
	cout<<"Nilai 1 Adalah "<<nilai1<<endl;
	cout<<"Nilai 2 Adalah "<<nilai2<<endl<<endl;
	
	p1-p2;
	cout<<"Setelah p1 = p2"<<endl;
	cout<<"Nilai 1 Adalah "<<nilai1<<endl;
	cout<<"Nilai 2 Adalah "<<nilai2<<endl<<endl;
	
	*p1=20;
	cout<<"Setelah *p1 = 20"<<endl;
	cout<<"Nilai 1 Adalah "<<nilai1<<endl;
	cout<<"Nilai 2 Adalah "<<nilai2<<endl<<endl;
	
	return 0;
}