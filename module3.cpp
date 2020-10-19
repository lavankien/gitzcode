#include <iostream>
#include <math.h>
using ll=long long;
int n;

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll k,s=0;
		cin>>n>>k;
		for (int i=1; i<=n ;i++)
			{
				s+=i%k;
			}
		if (k==s) cout<<"1"<<endl;
		else cout<<"0\n";
		
	}	
		
	return 0;
}
