#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s, s1, s2;
        cin >> s;
        s1 = s.substr(0, 3);
        s2 = s.substr(3, 3);
        int a = 0, b = 0;
        for (int i = 0; i < s1.length(); i++)
        {
            a += s1[i];
            b += s2[i];
        }

        a == b ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
