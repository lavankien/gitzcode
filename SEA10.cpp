#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;
ll nt(ll n){
    if (n<2) return 0;
    for (ll i=2 ;i<=sqrt(n); i++)
        if (n%i==0) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        ll n;
        cin>>n; 
        bool check=false;
        for (ll i=2; i<n; i++){
            if (nt(i) and nt(n-i)) {
                 cout<<i<<" "<<n-i;
                 check=true;
                 break;
            }
        }
        if (!check) cout<<-1; cout<<endl;
    }
    return 0;
}