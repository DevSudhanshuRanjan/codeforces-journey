#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,h;
    cin>> n>>h;
    int total = 0;
    while(n--){
        int a;
        cin>>a;
        total += ceil((double)a/h);
    }
    cout<<total<<endl;


    return 0;
}
