#include <iostream>
using namespace std;
void nhap(int a[],int n)
{
	for (int i=0; i<n; i++)
		cin>>a[i];
}
int kt(int a[],int n,int x)
{
	for (int i=0; i<n; i++)
		if (a[i]==x)
			return i;
	return -1;
}
int main()
{
	int t,n,x;
	int a[1000000];
	cin>>t;
	while (t--)
	{
		cin>>n>>x;
		nhap(a,n);
		cout<<kt(a,n,x)<<endl;	
	}
	return 0;
}
