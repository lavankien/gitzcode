#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
    	int n;
    	ll a;
    	cin>>n;
    	int d[10]={0};
    	for (int i=0; i<n; i++){
    		cin>>a;
    		while(a>0){
    			d[a%10]=1;
    			a/=10;
			}
		}
		for (int i=0; i<10; i++){
			if (d[i]==1) cout<<i<<" ";
		}
		cout<<endl;
   
    }
    return 0;
}
