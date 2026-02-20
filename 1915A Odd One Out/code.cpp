#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;
	while(t--){
		unordered_map<int,int> mp;
		for(int i = 0; i < 3; i++){
			int x;
			cin>>x;
			mp[x]++;
		}
		for(auto it : mp){
			if(it.second == 1){
				cout<<it.first<<endl;
				break;
			}
		}
		
	}

	return 0;
}
