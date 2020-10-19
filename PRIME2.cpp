#include <iostream>
#include <math.h>
using namespace std;
int nt(int n)
{
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long kq=n,kqua;
		for (int i=2; i<=sqrt(kq); i++)
		{
	
			while( n%i ==0 && n !=1 )
			{
				if (n/i==1) cout<<i;
				n/=i;
			}
			if (n==1) break;
		}
		if (n!=1) cout<<n;
		cout<<endl;
	}
}
 
