#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i=0; i<n;i++){
			cin>>a[i];
		}
		int max=0;
		for (int i=0; i<n; i++){
			int sum=0;
			float res=0;
			for (int j=i; j<k+i; j++){
				sum+=a[j];
			}
			res=sum/k;
			if (max<res) max=res;
		}
		cout<<max<<endl;
	}
	
	return 0;
}
