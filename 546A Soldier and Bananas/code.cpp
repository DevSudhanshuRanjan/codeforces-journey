#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;
    int total = k;
    for (int i = 2; i <= w; i++)
    {
        total += (k*i);
    }
    cout<<max(0,total-n)<<endl;

    return 0;
}
