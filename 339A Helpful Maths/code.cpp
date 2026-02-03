#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<char>v;
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '+')continue;
        else v.push_back(s[i]);
    }
    sort(v.begin(),v.end());
    string res;
    for (int i = 0; i < v.size(); i++)
    {
        if(i!=(v.size()-1)){
            // res += (v[i] + '+'); // this is actually a mistake as we use addition operator and this will convert both to int and then add so it will give error.
            res.push_back(v[i]);
            res.push_back('+');
        }
        else{
            res += v[i];
        }
    }
    cout<<res<<endl;

    return 0;
}

// 1+1+3+1+3
// 3+2+1
// 2
