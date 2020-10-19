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
int dem(long long a[],long long n,long long x)
{
	int dem=0;
	for (int i=0; i<n;i++)
		if (a[i]==x)
			{
				dem++;
			}
	if (dem==0) return -1;
	return dem;
}
int main()
{
	long long t,n,x,a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		nhap(a,n);
		bool check=false;
		for (int i=0;i<n; i++)
			if (dem(a,n,a[i])>=2)
				{
					check=true;
					cout<<a[i]<<endl;
					break;
				}
		if (check==false) cout<<"-1"<<endl;
	}
	return 0;
}
