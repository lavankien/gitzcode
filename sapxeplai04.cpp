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
    	int a[10000];
    	int n; cin>>n;
    	for (int it=0; it<n; it++){
    		cin>>a[it];
		}
		for (int i=1 ;i<n; i++){
			if (i%2==1){
				for (int j=i; j<n-1 ;j++){
					if (a[i]<a[j]){
						swap(a[i],a[j]);
					}
				}
			}
			else if (i%2==0){
				for (int j=i; j<n-1 ;j++){
					if (a[i]>a[j]){
						swap(a[i],a[j]);
					}
				}
			}
		}
		for (int i=0; i<n ;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
