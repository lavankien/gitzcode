#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

struct dat{
	int val,count;
};
bool cmp(dat x, dat y){
	if (x.count>y.count) return true;
	if (x.count==y.count &&x.val<y.val) return true;
	return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
   		int n;
   		cin>>n;
   		int d[100000]={0};
   		vector <dat> a(n);
   		for (int i=0; i<n ;i++){
   			cin>>a[i].val;
   			d[a[i].val]++;
	   }
	   for (int i=0; i<n ;i++){
	   		a[i].count=d[a[i].val];
	   }
	   sort(a.begin(),a.end(),cmp);
	   for (int i=0; i<n ;i++){
	   		cout<<a[i].val<<" ";
	   }
	   cout<<endl;
	   
    }
    return 0;
}
