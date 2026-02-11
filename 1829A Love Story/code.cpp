#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n = 0;
        string s;
        cin>>s;
        string compare = "codeforces";
        for(int i = 0;i<s.length();i++){
            if(s[i]!=compare[i])n++;
    
        }
        cout<<n<<endl;
    }

    return 0;
}
