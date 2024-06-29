// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

void *fun ()
{
    int *a = new int [3];
    int *b = new int [3];

    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;

    a = new int [5];
    for (int i = 0; i < 3; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    a[3] = 40;
    a[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }  
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << b[i] << " ";
    }
    
}

int main ()
{
    fun ();
    return 0;
}