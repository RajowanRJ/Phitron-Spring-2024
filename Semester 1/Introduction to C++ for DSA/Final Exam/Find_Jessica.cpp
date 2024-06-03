// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    string s;
    getline (cin, s);
    stringstream ss(s);
    string word;
    int flag = 0;
    
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            flag = 1;
        }
    }

    (flag != 0) ? cout << "YES" : cout << "NO";

    return 0; 
}