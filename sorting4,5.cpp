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
    	int n,m,a,d[100001]={0};
    	cin>>n>>m;
    	
    	for (int i=0 ;i<n+m; i++){
    		cin>>a;
    		d[a]++;
		}
   		for (int i=0; i<100001; i++)
   			if (d[i]>0) cout<<i<<" ";
   		cout<<endl;
   		for (int i=0; i<100001; i++)
   			if (d[i]>1) cout<<i<<" ";
   		cout<<endl;
    }
    return 0;
}
