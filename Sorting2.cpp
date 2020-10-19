#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

struct dat{
	int val1,i,val2;
};
bool cmp(dat x, dat y){
	if (x.val2>y.val2) return false;
	if (x.val2==y.val2&&x.i>y.i) return false;
	return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
   		int n,x;
   		cin>>n>>x;
   		vector <dat> a(n);
   		for (int i=0; i<n ;i++){
   			cin>>a[i].val1;
   			a[i].val2=abs(x-a[i].val1);
   			a[i].i=i;
	   }
	   sort(a.begin(),a.end(),cmp);
	   for (int i=0; i<n ;i++){
	   		cout<<a[i].val1<<" ";
	   }
	   cout<<endl;
	   
    }
    return 0;
}
