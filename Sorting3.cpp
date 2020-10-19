#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

struct dat{
	int val,vt; //so sanh theo cau truc, vi tri va gia tri
};
bool cmp(dat x, dat y){
	if (x.val>y.val) return false;
	if (x.val==y.val && x.vt>y.vt) return false;
	return true;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
   		int n;
   		cin>>n;
   		vector <dat> a(n);
   		for (int i=0; i<n ;i++){
   			cin>>a[i].val;
   		//	a[i].val2=abs(x-a[i].val1);
   			a[i].vt=i;
	   }
	   int result=0;
	   sort(a.begin(),a.end(),cmp);
	   for (int i=0; i<n ;i++){
	   		while(a[i].vt!=i){  // so sanh vi tri ban dau voi vi tri sau khi sap xep
	   			result++;		// khac nhau thi tang kq, doi cho 2 phan tu do
	   			swap(a[i],a[a[i].vt]);
			}
	   }
	   cout<<result;
	   cout<<endl;
    }
    return 0;
}
