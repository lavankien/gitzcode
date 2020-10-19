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
		vector <ll> input(n);
		for (auto &it: input){
			cin>>it;
		}
		int res=0;
		for (int i=0 ;i<n; i++){
			if (input[i]==k)
				{
					res=i+1;
					break;
				}
		}
//		ll res=10e9;
        cout << res << endl;
	}
}
