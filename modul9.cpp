#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;
long M = 1e9 +7;
using ll = long long;

ll gt(int n){
    int gt=1;
    for (int i=1; i<=n ;i++){
        gt=((gt%M)*(i%M))%M;
    }
    return gt;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
            int n,r;
            cin>>n>>r;
            cout<<gt(n)/(gt(r)*gt(n-r))<<endl;
    }
    return 0;
}