#include <bits/stdc++.h>
using namespace std;

bool check_unique(string s){
    set<char> st;
    for(auto c:s)st.insert(c);
    return st.size() == s.length();
}

int main(){

    string s;
    cin>>s;
    bool b = false;
    while(!b){
        b = check_unique(to_string(stoi(s)+1));
        s = to_string(stoi(s)+1);
    }
    cout<<s;

    return 0;
}
