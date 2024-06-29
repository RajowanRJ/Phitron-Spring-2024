// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Student
{
    public : 

    int id;
    char name[101];
    char sec;
    int mark;
};

int main ()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student a, b, c;
    cin >> a.id >> a.name >> a.sec >> a.mark;
    cin >> b.id >> b.name >> b.sec >> b.mark;
    cin >> c.id >> c.name >> c.sec >> c.mark;

    if (a.mark > b.mark && a.mark > c.mark)
    {
        cout << a.id << " " << a.name << " " << a.sec << " " << a.mark << endl;
    }
    else if (b.mark > a.mark && b.mark > c.mark)
    {
        cout << b.id << " " << b.name << " " << b.sec << " " << b.mark << endl;
    }
    else if (c.mark > a.mark && c.mark > b.mark)
    {
        cout << c.id << " " << c.name << " " << c.sec << " " << c.mark << endl;
    }

    else if (a.mark == b.mark && a.mark == c.mark && b.mark == c.mark)
    {
        if (a.id < b.id && a.id < c.id)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark << endl;
        }
        else if (b.id < a.id && b.id < c.id)
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark << endl;
        }
        else 
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark << endl;
        }
    }

    else if (a.mark == b.mark)
    {
        if (a.id < b.id)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark << endl;
        }
        else
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark << endl;
        }
    }
    else if (a.mark == c.mark)
    {
        if (a.id < c.id)
        {
            cout << a.id << " " << a.name << " " << a.sec << " " << a.mark << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark << endl;
        }
    }
    else
    {
        if (b.id < c.id)
        {
            cout << b.id << " " << b.name << " " << b.sec << " " << b.mark << endl;
        }
        else
        {
            cout << c.id << " " << c.name << " " << c.sec << " " << c.mark << endl;
        }
    }
    }
    

    return 0;
}