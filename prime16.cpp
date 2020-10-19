#include <iostream>
using namespace std;
#include <math.h>
using ll=long long;
ll nt(ll n){
    if (n<2) return 0;
    for (ll i=2 ;i<=sqrt(n); i++)
        if (n%i==0) return 0;
    return 1;
}
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        int dem=0;
        for (ll i=2; i<=sqrt(n); i++)
			if (nt(i))
				dem++;
        cout<<dem;
        cout<<endl;
        
    }
    return 0;
}