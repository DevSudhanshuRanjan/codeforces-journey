#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int count = 0;
    for(auto it:s){
        if(it == '4' or it == '7')count++;
    }
    if(count == 4 or count == 7)cout<<"YES";
    else cout<<"NO";

    return 0;
}
