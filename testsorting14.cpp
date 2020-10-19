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
		vector <ll> res(n);
		for (auto &it: res){
			cin>>it;
		}
		int count=0;
		sort(res.begin(),res.end());
		for (ll i=0; i<n-1; i++){
			if (res[i]+1!=res[i+1])
				count++;
		}
		cout<<count<<endl;
	}
}
