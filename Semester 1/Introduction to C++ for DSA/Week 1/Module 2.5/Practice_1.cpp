// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int *getArray (int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    return a;
}

int main ()
{
    int n;
    cin >> n;
    int *a = getArray(n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    delete[] a;
    return 0;
}