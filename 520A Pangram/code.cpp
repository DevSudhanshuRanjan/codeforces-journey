#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    string s;
    cin >> n >> s;
    set<char> res;
    for (auto c : s)
        res.insert(tolower(c));

    if (res.size() == 26) cout << "YES";
    else cout << "NO";

    return 0;
}
