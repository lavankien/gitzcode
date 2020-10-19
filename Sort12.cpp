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
		ll n,m;
		cin>>n>>m;
		vector <ll> entry(n),entry1(m);	
		for (auto &it: entry){
			cin>>it;
			}
		for (auto &it: entry1){
			cin>>it;
		}
		sort(entry.begin(),entry.end());
		sort(entry1.begin(),entry1.end());
		cout<<entry[n-1]*entry1[0];
		cout<<endl;
	}
	return 0;
}
