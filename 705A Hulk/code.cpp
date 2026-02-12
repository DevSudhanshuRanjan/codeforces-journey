#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string s1 = "I hate that",s2 = "I love that",s3;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            s3+=s2;
        }
        else s3+=s1;
        s3+=" ";
    }
    s3.pop_back();
    s3.pop_back();
    s3.pop_back();
    s3.pop_back();
    s3.pop_back();
    s3 += "it";
    cout<<s3;

    

    return 0;
}
