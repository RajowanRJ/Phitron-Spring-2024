// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student fun()
{
    Student rahim(342, 12, 4.99);
    return rahim;
}

int main()
{
    Student a = fun();
    cout << a.roll << endl;
}