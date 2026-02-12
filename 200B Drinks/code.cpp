#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    int  num = t;
    float val=0;
    while(t--){
        int n;
        cin>>n;
        val+=n;
    }
    cout<<val/num<<endl;

    return 0;
}
