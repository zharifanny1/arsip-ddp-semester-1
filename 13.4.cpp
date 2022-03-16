#include<iostream>
using namespace std;
int main()
{
	int i=15;
	float f=1.25;
	double d=33.33;
	
	void *p=NULL;						//Deklarasi void pointer
	
	p=&i;
	cout<<"p menunjuk ke alamat i"<<endl;
	cout<<"Nilai *p: "<<*((int*)p)<<endl;
	cout<<"Nilai p : "<<p<<endl<<endl;
	
	p=&f;
	cout<<"p menunjuk ke alamat i"<<endl;
	cout<<"Nilai *p: "<<*((float*)p)<<endl;
	cout<<"Nilai p : "<<p<<endl<<endl;
	
	p=&d;
	cout<<"p menunjuk ke alamat i"<<endl;
	cout<<"Nilai *p: "<<*((double*)p)<<endl;
	cout<<"Nilai p : "<<p<<endl<<endl;
	
	return 0;
}