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
		ll n,k,a;
		cin>>n>>k;
		int res=0;
		for (int i=0; i<n; i++){
		    cin>>a;
		    if (a==k){
		        res=i;
		    }
		}
        cout << res+1 << endl;
	}
}
