#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
    	int n,k,a[100001];
    	cin>>n>>k;
    	for (int i=0; i<n ;i++){
    		cin>>a[i];
   		}
		sort(a,a+n);
		ll count=0;
		for (int i=0; i<n; i++){
			int temp=upper_bound(a,a+n,a[i]-k)-a;
			temp=i-temp;
			if (temp>0) count+=temp;
		}
		cout<<count<<" "<<endl;   
    }
    return 0;
}
