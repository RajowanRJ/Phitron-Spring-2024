// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, s, flag = 0;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (a[i] + a[j] + a[k] == s)
                    {
                        flag = 1;
                    }
                }
                
            }
            
        }

        (flag == 1) ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}