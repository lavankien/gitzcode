#include <iostream>
#include <math.h>
int demuoc(long long n)
{
	if (n==1) return 0;
	if (n==2) return 0;
	int dem=0;
	for (long long i=2; i<=n/2; i++)
		if (n%i==0) dem++;
	if (dem==3) return 1;
}
using ll=long long;
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
	ll n;
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n;
	//	cout<<n;
	
		for (long long i=2; i<=sqrt(n); i++)
			if (i*i<n&& nt(i))
				cout<<i*i<<" ";
//			else
//			
//			{
//				cout<<endl;
//				break;
//			}
		cout<<endl;			
	}
	return 0;
}
