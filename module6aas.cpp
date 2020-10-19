#include <iostream>
using namespace std;
int sqr(int x) {
    return x*x;
}
using ll=long long;
int pow(int a, int b, int MOD) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2,MOD)) % MOD;
        else
            return a * (sqr(pow(a, b/2,MOD)) % MOD) % MOD;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		ll a,b,MOD;
		cin>>a>>b>>MOD;
		cout<<pow(a,b,MOD)<<endl;
	}
}
