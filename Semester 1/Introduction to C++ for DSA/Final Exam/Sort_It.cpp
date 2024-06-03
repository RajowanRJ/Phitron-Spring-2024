// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public :
    string nm;
    int cls;
    char s;
    int id;
    int mathmarks;
    int engmarks;
    int totalmarks;
};

bool cmp (Student a, Student b)
{
    if (a.totalmarks > b.totalmarks)
    return true;
    else if (a.totalmarks < b.totalmarks)
    return false;
    else
    {
        if (a.id < b.id)
        return true;
        else 
        return false;
    }
}

int main ()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].mathmarks >> a[i].engmarks;
        a[i].totalmarks = a[i].mathmarks + a[i].engmarks;
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mathmarks << " " << a[i].engmarks << endl;
    }

    
    return 0;
}