#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    int count = 0;
    vector<int> v;
    while(n--){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int kValue = v[k-1];
    for(int i=0;i<v.size();i++){
        if(v[i]>=kValue && v[i]!=0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}
// so in this question what we have to find is that when we will get the k then we have to find the what will be the value of the kth element in the array and when we get the value then we have to check for all the elements whose value is greater than or equal to the kth element and also not equal to zero because if the value is zero then it will not be considered as a valid participant in the contest so we have to check for all the elements whose value is greater than or equal to the kth element and also not equal to zero and we have to count those elements and at the end we have to print that count.