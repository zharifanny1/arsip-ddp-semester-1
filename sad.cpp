#include <iostream>
using namespace std;
int main() {
  	cout<<"		PERKALIAN MATRIKS DASAR PEMROGRAMAN\n";
  	int data[10][10], data2[10][10], hasil[10][10];
  
  	int i, j, k, m, n, p, q, jumlah=0;
  	//user bebas menentukan ukuran matriks yang diinginkan
  	cout<<"Masukkan Jumlah Baris Matriks Pertama: "; cin>>m;
  	cout<<"Masukkan Jumlah Kolom Matriks Pertama: "; cin>>n;
  	cout<<"Masukkan Jumlah Baris Matriks Kedua: "; cin>>p;
  	cout<<"Masukkan Jumlah Kolom Matriks Kedua: "; cin>>q;
  	if(n != p){
    		cout<<"Matriks tidak dapat dikalikan satu sama lain.\n";
 
  	} 
	else {
    	cout<<"Masukkan elemen matriks Pertama: ";
    	for(i=0; i<m; i++){
      		for(j=0; j<n; j++){
        		cin>>data[i][j];
      		}
    	}
    	cout<<"Masukkan elemen matriks Kedua: ";
    	for(i=0; i<p; i++){
      		for(j=0; j<q; j++){
        		cin>>data2[i][j];
      		}
    	}
    	cout<<" Matriks 1 	|	Matriks 2 \n";
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				cout<<"  "<<data[i][j]<<"  ";
			}
			cout<<"	|	";
			for(j=0;j<m;j++){
				cout<<data2[i][j]<<"  ";
			}
			cout<<endl;
		}
    	for(i=0; i<m; i++){
      		for(j=0; j<q; j++){
        		for(k=0; k<p; k++){
          			jumlah=jumlah + data[i][k] * data2[k][j];
        		}
        		hasil[i][j]=jumlah;
        		jumlah=0;
      		}
    	}
    	cout<<"Hasil perkalian matriks: \n";
    	for(i=0; i<m; i++){
      		for(j=0; j<n; j++){
        		cout<<hasil[i][j]<<"\t";
      		}
      		cout<<endl;
    	}
  	}
  	return 0;
}