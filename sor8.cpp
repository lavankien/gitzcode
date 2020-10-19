#include <bits/stdc++.h>
using namespace std;
int count(int b[],int m,int d[],int x){
	if (x==0) return 0;
	if (x==1) return d[0];
	int tmp=upper_bound(b,b+m,x)-b;
	long ans= m-tmp;
	
	ans+=d[0]+d[1];
	if (x==2) ans-=(d[3]+d[4]);
	if (x==3) ans+=d[2];
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int a[n],b[m];
		cin>>n>>m;
		int d[10]={0};
		for (int i=0; i<n; i++)
			cin>>a[i];
		for (int j=0; j<m; j++){
			cin>>b[j];
			if (b[j]<5) d[b[j]]++;
		}
		sort(b,b+m);
		long res=0;
		for (int i=0; i<n ;i++){
			res+=count(b,m,d,a[i]);
		}
		cout<<res<<endl;
	}
	return 0;
}
