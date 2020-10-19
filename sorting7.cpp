#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin>>n;
    	vector <int> a(n),b(n);
    	for(int i=0; i<n; i++){
    		cin>>a[i];
    		b[i]=a[i];//tao mang b giong het mang a
		}
		int left=0,right=0;
		sort(b.begin(),b.end());
		for (int i=0; i<n ;i++){ // duyet tu dau den cuoi
			if (b[i]!=a[i]){ // tim vi tri khac dau tien cua 2 mang chinh la left
				left=i;
				break;
			}
		}
		for (int i=n-1; i>0;i--){
			if (b[i]!=a[i]){// vi tri khac dau tien la right
				right=i;
				break;
			}
		}
		cout<<left+1<<' '<<right+1<<endl;
    }
    return 0;
}
