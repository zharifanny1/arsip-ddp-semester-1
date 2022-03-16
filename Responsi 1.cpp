#include <iostream>
using namespace std;
int main()
{
    int n, satu = 0, dua = 1, next = 0;
    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";cin >> n;
	cout<<endl;
    cout << "Deret Fibonacci: ";
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << satu<<" ";
            continue;
        }
        if(i == 2)
        {
            cout << dua << " ";
            continue;
        }
        next = satu + dua;
        satu = dua;
        dua = next;
        cout << next << " ";
    }
    return 0;
}