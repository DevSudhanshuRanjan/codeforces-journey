#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int maxi = 0;
    int current = 0;
    while(n--){
        int a,b;
        cin>>a>>b;
        current = (current -a)+b;
        maxi = max(maxi,current);
    }
    cout<<maxi;

    return 0;
}
