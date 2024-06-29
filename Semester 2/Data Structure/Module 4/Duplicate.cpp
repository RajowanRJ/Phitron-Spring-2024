// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);
    bool found = false;
    for (int i = 1; i < n; i += 2)
    {

        if (a[i] == a[i - 1] || a[i] == a[i + 1])
        {
            found = true;
            break;
        }
    }
    (found == true) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}