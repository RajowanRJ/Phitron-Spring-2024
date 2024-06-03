// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    delete[] a;
    int m;
    cin >> m;
    a = new int[m];

    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    delete[] b;

    for (int i = n; i < m; i++)
    {
        cin >> a[i];
    }
    
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}