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

int main()
{
    Student rahim(29, 12, 5.01);
    Student karim(23, 12, 4.33);
    cout << "Name" << "\t" << "Class" << "\t" << "Roll" << "\t" << "GPA" << "\t" << endl;
    cout << "----------------------------" << endl;
    cout << "Rahim" << "\t" << rahim.roll << "\t\t" << rahim.cls << "\t\t" << rahim.gpa << endl;
    cout << "Karim" << "\t" << karim.roll << "\t\t" << karim.cls << "\t\t" << karim.gpa << endl;
}