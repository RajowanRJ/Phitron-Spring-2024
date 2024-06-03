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
    if (a.engmarks > b.engmarks)
    return true;
    else if (a.engmarks < b.engmarks)
    return false;
    else
    {
        if (a.mathmarks == b.mathmarks)
        {
            if (a.id < b.id) return true ;
            else return false;
        }
        else if (a.mathmarks > b.mathmarks)
        return true;
        else
        return false;
        {
            
        }
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
    }
    sort(a, a+n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].mathmarks << " " << a[i].engmarks << endl;
    }

    
    return 0;
}