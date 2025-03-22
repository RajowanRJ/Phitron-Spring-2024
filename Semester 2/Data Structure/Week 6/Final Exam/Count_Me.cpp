// Starting in the name of Almighty Allah
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        string sentence;
        getline(cin, sentence);

        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        string word1;
        int count = 0;

        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                word1 = word;
            }
        }

        cout << word1 << " " << count << endl;
    }
    return 0;
}
