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
			return 1;
	return -1;
}
main()
{
	int t; cin>>t;
	int n,x,a[1000];
	
	while (t--)
	{
		cin>>n>>x;
		nhap(a,n);
		cout<<kt(a,n,x)<<endl;	
	}

}
