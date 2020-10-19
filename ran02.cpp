#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n,a[10002],l,r;
		cin>>n;
		for (int i=0; i<n ;i++){
			cin>>a[i];
//			cout<<a[i]<<"\t";
		}
		cin>>l>>r;
		bool d=true;
		for (int i=l; i<r/2; i++){
			if (a[i]>a[i+1]) {
				d=false;
				break;
			}
		}
		for (int i=r/2; i<r; i++){
			if (a[i]<a[i+1]) {
				d=false;
				break;
			}
		}
		if (d) cout<<"YES\n"; else cout<<"NO\n";
	}
	return 0;
}
