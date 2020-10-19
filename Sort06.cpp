#include <iostream>
#include <vector>
#include <algorithm>
using ll=long long;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> entry(n);	
		for (auto &it: entry){
			cin>>it;
			}
		sort(entry.begin(),entry.end());
		for (auto it: entry)
			cout<<it<<" ";
		
		cout<<endl;
	}
	return 0;
}
