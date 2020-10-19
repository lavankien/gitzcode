#include <bits/stdc++.h>
using namespace std;
#include <algorithm>
#include <ctime>
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int n,a[1002],f[1002]={1};
		cin>>n;
		for (int i=0; i<n ;i++){
			cin>>a[i];
//			cout<<a[i]<<"\t";
		}
//		cout<<endl;
		f[0]=1;
		int result;
		for (int i=1; i<n; i++) {
		    result=0;
		    for (int j=0; j<i; j++) 
				if (a[i] > a[j]) {
		        	if (f[j]>result)
		        		result=f[j];
		    }
		    f[i]=result +1;
		}
//		for (int i=0; i<n; i++) cout<<f[i]<<"\t"; cout<<endl;
		sort(f,f+n);
		cout<<f[n-1]<<endl;
	}
	return 0;
}
