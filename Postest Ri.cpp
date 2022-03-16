#include <iostream>

using namespace std;

int main() {
  int m1[10][10], m2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah=0;
  
  cout<<"Masukkan Jumlah Baris Matriks Pertama	: ";cin>>m;
  cout<<"Masukkan Jumlah Kolom Matriks Pertama	: ";cin>>n;

  cout<<"Masukkan Jumlah Baris Matriks Kedua	: ";cin>>p;
  cout<<"Masukkan Jumlah Kolom Matriks Kedua	: ";cin>>q;

  if(n != p)
  {
  	cout<<"Matriks Tidak Dapat Dikalikan Satu Sama Lain.\n";
  } 
  else 
  {
    cout<<"Masukkan elemen matriks Pertama: \n";
    for(i=0; i<m; i++)
	{
      for(j=0; j<n; j++)
	  {
        cin>>m1[i][j];
      }
    }

    cout<<"Masukkan Elemen Matriks Kedua: \n";
    for(i=0; i<p; i++)
	{
      for(j=0; j<q; j++)
	  {
        cin>>m2[i][j];
      }
    }

    for(i=0; i<m; i++)
	{
      for(j=0; j<q; j++)
	  {
        for(k=0; k<p; k++)
		{
          jumlah=jumlah+m1[i][k]*m2[k][j];
        }
        hasil[i][j]=jumlah;
        jumlah=0;
      }
    }

    cout<<"Hasil perkalian matriks: \n";
    for(i=0; i<m; i++)
	{
      for(j=0; j<n; j++)
	  {
        cout<<hasil[i][j]<<"\t";
      }
      cout<<endl;
    }

  }

  return 0;
}