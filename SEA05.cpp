#include <iostream>
using namespace std;
using ll=long long;
void nhap(ll a[],ll n)
{
	for (ll i=1; i<n; i++)
		cin>>a[i];
}
int main(){
	ll a[100000];
	ll n,x;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;
		nhap(a,n);
		if (a[n/2]==x)
		{
			cout<<n/2<<endl;
			break;
		}
		for (ll i=0; i<n/2; i++)
			if (x==a[i]) {
				cout<<i<<endl;
				break;
			}
		for (ll i=n/2;i <n; i++)
			if (x==a[i]){
				cout<<i<<endl;
				break;
			}
		
	}
	return 0;
}
