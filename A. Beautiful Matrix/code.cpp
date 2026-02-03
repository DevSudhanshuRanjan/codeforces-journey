#include <bits/stdc++.h>
using namespace std;

int main() {
    int r, c;
    int rcnt = 5;

    while (rcnt--) {
        int a, b, x, d, e;
        cin >> a >> b >> x >> d >> e;

        int row = 5 - rcnt;

        if (a == 1) c = 1, r = row;
        else if (b == 1) c = 2, r = row;
        else if (x == 1) c = 3, r = row;
        else if (d == 1) c = 4, r = row;
        else if (e == 1) c = 5, r = row;
    }

    cout << abs(r - 3) + abs(c - 3) << endl;
    return 0;
}
