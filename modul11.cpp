#include <bits/stdc++.h>


using namespace std;

using ll = long long;
ll mul(ll a,ll b ,ll c ){
    if (a==0||b==0) return 0; 
	int temp= mul(a,b/2,c); 
	if (b%2==0) return ( 2* (temp%c)) %c; 
	else return (a%c + 2*(temp%c)) %c; 
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        cout<<mul(a,b,c)<<endl;
    }
    return 0;
}