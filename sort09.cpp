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
		ll n,k;
		cin>>n>>k;
		vector <ll> entry(n);	
		for (auto &it: entry){
			cin>>it;
		}
		int count=0;
		for (int i=0; i<n-1; i++)
			for (int j=i+1; j<n;j++){
				if (entry[i]+entry[j]==k) count++;
			}
		cout<<count;
//		sort(entry.begin(),entry.end());
//		for (auto it: entry)
//			cout<<it<<" ";
		
		cout<<endl;
	}
	return 0;
}
