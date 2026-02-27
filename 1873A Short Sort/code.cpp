#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alph = "abc";
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        string s;
        cin >> s;
        int cnt = 0;
        for (int j = 0; j < 3; j++)
        {
            cnt += (s[j] != alph[j]);
        }
        cout << (cnt <= 2 ? "YES\n" : "NO\n");
    }
    return 0;
}
