#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll mod(string number, ll a) 
{ 
    ll res = 0; 
    for (ll i = 0; i < number.length(); i++) 
        {
            res=(res*10+(number[i]-'0'))%a;
        }
    return res; 
} 
ll sqr(ll x) {
    return x*x;
}
ll pow(ll a, ll b,ll MOD) {
    if (b == 0) return 1%MOD;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2,MOD))%MOD;
        else
            return a * sqr(pow(a, b/2,MOD))%MOD;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    ll m;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin>>s; ll b,M;
        cin>>b>>M;
        ll a=mod(s,M);
        cout<<pow(a,b,M)<<endl;
    }
    return 0;
}
