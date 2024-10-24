#include <iostream>
using namespace std;

int main() {
float n, i, num, max;
cout << "Inserisci quante volte devi inserire i numeri" << endl;
cin >> n;
for (i=0; i<n; i=i+1)
{
    cout << "Inserisci il numero"<< endl;
    cin>> num;
    if(i=0)
    {
        max=num;
    }
    else
    {
        if(num>max)
        {
            max =num;
        }
        else 
        {

        }
    }
}
cout << "Il numero massimo è " << max;
}


