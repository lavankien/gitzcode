#include <iostream>
#include <math.h>
//using ll=long long;
using namespace std;
#include <algorithm>
void nhap(long long a[],long long n)
{
	for (long long i=0; i<n; i++)
		cin>>a[i];
}
void print(long long a[],long long n,long long k) {
	sort(a,a+n);
	for (long long i=n-1; i>=n-k; --i)
		cout<<a[i]<<" ";
}
int main()
{
	long long t,n,k,a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		nhap(a,n);
		print(a,n,k);
		cout<<endl;
	}
	return 0;
}
