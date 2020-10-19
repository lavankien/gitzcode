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
int  ntnn(int n)
{
	if(n==1) return 1;
	if (nt(n)) return n;
	if (n%2==0) return 2;
	int temp=n;
	if (n%2==1)
	{
		for (int i=2; i<=sqrt(temp);i++)
		{
			int d=0;
			while(n%i==0)
			{
				d++;
				return i;
				break;
			}
			if (d==1) break;
		}
	 } 
}
int main()
{
	int n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for (int i=1; i<=n; i++)
			cout<<ntnn(i)<<" ";
		cout<<endl;
	}
	return 0;
}
