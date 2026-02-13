#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    int drinks_needed = total_drink / nl;
    int slices_needed = total_slices;
    int salt_needed = total_salt / np;

    int min_needed = min({drinks_needed, slices_needed, salt_needed});
    cout << min_needed / n << endl;

    return 0;
}
