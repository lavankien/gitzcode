#include <iostream>
#include <vector>
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
		vector <ll> k(n),res;
		for (auto &it: k){
			cin>>it;
		}
		ll count=0;
		for (auto &it: k){
			if (it==0) count++;
		}
		for (auto &it: k){
			if (it!=0) res.push_back(it);
		}
		for (ll i=0; i<count; i++)
		{
			res.push_back(0);
		}
		for (auto it: res)
			cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
