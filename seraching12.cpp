#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int n,x;
        int a[100000];//aj-ai=x => a[j] = x+a[i]
        cin>>n>>x;
        int check[100000]={0};
        for (int i=0; i<n ;i++){
            cin>>a[i];
            check[a[i]]=true;
        }
        sort(a,a+n);
        bool kt=false;
        for (int i=0; i<n; i++){
        	if (check[x+a[i]]) {
        		cout<<1;
        		kt=true;
        		break;
			}
		}
        if (!kt) cout<<-1;
        cout<<endl;
    }
    return 0;
}
