#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int res = 0;
    while (n--)
    {
        int s;
        cin >> s;
        res = max(res,s);
    }
    cout << (res>0? "HARD":"EASY");
    return 0;
}
