#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,a[100000],f[1000000];
		cin>>n;
		for (int i=0; i<n ;i++){
			cin>>a[i];
		}
		int result = 1;
		for (int i=1; i<=n; i++) {
		    f[i] = 0;
		    for (int j=0; j<i; j++) if (a[j] < a[i]) {
		        f[i] = max(f[i], f[j] + 1);
		    }
		    result = max(result, f[i]);
		}
		cout<<result<<endl;
	}
	return 0;
}
