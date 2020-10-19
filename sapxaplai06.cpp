#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin.ignore();
		int n,a[100000];
		cin>>n;
		int c[100000];
		for (int i=0; i<n; i++){
			cin>>a[i];
			if (a[i]!=0) c[a[i]]=1;
		}
		vector <int> res;int d=0;
		for (int i=0; i<n ;i++){
			if (c[a[i]]==0){
				swap(a[i],a[n-i]);
			}
			else{
			
			if (a[i]==a[i+1] && c[a[i]]){
				d++;
				a[i]*=2;
				a[i+1]=0;
				swap(a[i+1],a[n-d]);
			}
			}
		}
		for (int i=0; i<n ;i++) cout<<a[i]<<" "; cout<<endl;
	}
	
	return 0;
}
