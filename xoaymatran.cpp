#include <bits/stdc++.h>


using namespace std;

using ll = long long;
void xuat(int a[][102],int n, int m){
	for (int i=0 ;i<n ;i++){
   			for (int j=0; j<m; j++){
   				cout<<a[i][j]<<" ";
			   }
			cout<<endl;
		   }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
   		int n,m,a[102][102];
   		cin>>n>>m;
   		for (int i=0 ;i<n ;i++){
   			for (int j=0; j<m; j++){
   				cin>>a[i][j];
			   }
		   }
		xuat(a,n,m);
		for (int i=0 ;i<n ;i++){
   			for (int j=0; j<m; j++){
   					a[i][j]=a[j][i];
			   }
		   }
		xuat(a,n,m);
    }
    return 0;
}
