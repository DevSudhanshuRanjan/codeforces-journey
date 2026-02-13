#include <bits/stdc++.h>
using namespace std;

int main(){

    int q,k;
    cin>>q>>k;
    int time_left = 240 - k;
    int count = 0;
    for(int i = 1; i <= q; i++){
        if(time_left - (5*i) >= 0){
            time_left -= (5*i);
            count++;
        }
        else break;
    }
    cout << count << endl;
    return 0;
}
