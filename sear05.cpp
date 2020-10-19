#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
using ll=long long;
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
		set <ll> s(entry.begin(),entry.end());
		set<ll> ::iterator it=(s.begin());
		if (s.size()==1) cout<<"-1";
		else
		for(int i=0; i<2; i++){
			advance(it,i);
			cout<<*it<<" ";
		}
		cout<<endl;
//		if (entry[0]==entry[entry.size()])
//			cout<<"-1";
//		else
//		{
//			for ()
//		}
	}
	return 0;
}
