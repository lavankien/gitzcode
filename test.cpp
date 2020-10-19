#include <iostream>
using namespace std;
using ll=long long;
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
int nt(ll n){
    if (n<2) return 0;
    for (ll i=2; i<=sqrt(n); i++)
        if (n%i==0) return 0;
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        for (ll i=1; i<=n; i++)
            {
                if (i==1) cout<<1<<" ";
                if (i%2==0) cout<<2<<" ";
                else 
                if (nt(i)) cout<<i<<" ";
                else
                {
                    for (int j=3; j<=sqrt(i); j+=2)
                        if (i%j==0) {
                            cout<<j<<" ";
                            break;
                        }
                }
            }
        cout<<endl;
    }
    return 0;
}
