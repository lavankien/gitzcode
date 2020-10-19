#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using ll=long long;
struct cmp{
bool operator() (int a,int b) {return a<b;}
};
using namespace std;
int main(){
	int a[10000];
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> entry(n);
		for (auto &it: entry){
			cin>>it;
		}
//		sort(entry.begin(),entry.end());
		vector <ll> res;
		set <ll,cmp> s;
		for (ll i=0; i<entry.size();i++){
			if (entry[i]>0) s.insert(entry[i]);
		}
		ll i=1;
		for (set<ll>:: iterator it = s.begin(); it != s.end(); it++){
			 {
			 	advance(it,i-1);
			 	res.push_back(*it);
			 	i+1;
			 }
		}
		bool check=false;
		if (res.size()==1 and res[0]!=1) {
				cout<<"1";
				check=true;
			} 
		else if (res.size()==0) {
			cout<<"1";
			check=true;}
		else if (res.size()>1)
		{
			
		for (ll j=0; j<res.size();j++)
		{
			if (res[i+1]-res[i]>=2){
				cout<<res[j]+1;
				check=true;
				break;
			}
		}}
		else if(!check) cout<<res[res.size()-1]+1;
//		for (set<int>:: iterator it = s.begin(); it != s.end(); it++)
//		   			cout<<*it<<" ";
//		cout<<endl;
//		for (auto it: res){
//			cout<<it<<" ";
//		}
		cout<<endl;
	}
	return 0;
}
