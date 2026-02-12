#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,p,q;
    unordered_set<int>st;
    cin>>t;
    cin>>p;
    while(p--){
        int a;
        cin>>a;
        st.insert(a);
    }
    cin>>q;
    while(q--){
        int a;
        cin>>a;
        st.insert(a);
    }
    if(st.size()==t)cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";

    return 0;
}
