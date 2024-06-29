// Starting in the name of Almigty Allah
#include <bits/stdc++.h>
using namespace std;

int **fun ()
{
    int *a = new int;
    *a = 30;
    cout << "Fun : " << a << endl;
    int **p = &a;
    return p;
}

int main ()
{
    int **a = fun();
    cout << "Main : " << a << endl;


    // int *a = new int;
    // cin >> *a;
    // cout << *a << endl;
}