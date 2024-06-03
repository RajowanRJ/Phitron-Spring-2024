// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public :
        string name;
        int cls;
        char s;
        int marks;
};

int main ()
{
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].s >> a[i].marks;
    }

    int i = 0, j = n - 1;
    while(i < j)
    {
        swap (a[i].s, a[j].s);
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].s << " " << a[i].marks << endl;
    }
    
    return 0;
}