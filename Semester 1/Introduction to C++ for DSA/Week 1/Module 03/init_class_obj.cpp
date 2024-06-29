// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

class Bike 
{
    public :
        char name[100];
        char color[100];
        int speed;
};

int main ()
{
    Bike a,b;
    cin.getline (a.name,100);
    cin >> a.color >> a.speed;
    
    getchar();
    cin.getline (b.name,100);
    cin >> b.color >> b.speed;
    
    cout << a.name << endl << "Color : " << a.color << endl << "Speed : " << a.speed << endl;
    cout << endl;
    cout << b.name << endl << "Color : " << b.color << endl << "Speed : " << b.speed << endl;
}