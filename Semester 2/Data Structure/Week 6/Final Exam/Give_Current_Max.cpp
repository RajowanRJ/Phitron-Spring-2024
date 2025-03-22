#include <bits/stdc++.h>
using namespace std;

class Stu
{
public:
    string nm;
    int ag;
    int mk;

    Stu(string n, int a, int m) : nm(n), ag(a), mk(m)
    {
    }

    bool operator<(const Stu &o) const
    {
        if (mk != o.mk)
        {
            return mk > o.mk;
        }
        else
        {
            return ag < o.ag;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    set<Stu> sts;

    for (int i = 0; i < n; i++)
    {
        string nm;
        int ag, mk;
        cin >> nm >> ag >> mk;
        sts.insert(Stu(nm, ag, mk));
    }

    int q;
    cin >> q;

    while (q--)
    {
        int cmd;
        cin >> cmd;

        if (cmd == 0)
        {
            string nm;
            int ag, mk;
            cin >> nm >> ag >> mk;
            sts.insert(Stu(nm, ag, mk));
            if (!sts.empty())
            {
                cout << sts.begin()->nm << " " << sts.begin()->ag << " " << sts.begin()->mk << endl;
            }
        }
        else if (cmd == 1)
        {
            if (!sts.empty())
            {
                cout << sts.begin()->nm << " " << sts.begin()->ag << " " << sts.begin()->mk << endl;
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
        else if (cmd == 2)
        {
            if (!sts.empty())
            {
                sts.erase(sts.begin());
                if (!sts.empty())
                {
                    cout << sts.begin()->nm << " " << sts.begin()->ag << " " << sts.begin()->mk << endl;
                }
                else
                {
                    cout << "Empty" << endl;
                }
            }
            else
            {
                cout << "Empty" << endl;
            }
        }
    }
    return 0;
}
