#include <iostream>
#include <vector>
#include <set>
#include <math.h>
using ll=long long;
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> res;
		ll temp = n;
		int j=0;
        for(ll i = 2; i <temp; i++) {
            while(n % i ==0 ) {
            	res.push_back(i);
           	 	n/=i;
            }
		}
//		for (auto &it: res){
//			cout<<it<<" ";
//		}
		set <ll> thu(res.begin(),res.end());
		if ((thu.size()-res.size())==0 and res.size()==3) cout<<"1\n";
		else cout<<"0\n";
	}
	return 0;
}
