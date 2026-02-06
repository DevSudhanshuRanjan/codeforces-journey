#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    string ini = "Timur";
    sort(ini.begin(), ini.end());

    while(n--){
        int input;
        cin >> input;
        string s;
        cin >> s;
        if(input>ini.length() || input<ini.length()){
            cout << "NO" << endl;
            continue;
        }
        else{
            sort(s.begin(), s.end());
            if(s==ini){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }

    return 0;
}
