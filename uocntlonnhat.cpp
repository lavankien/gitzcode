#include <iostream>
#include <math.h>
using namespace std;
int nt(int n)
{
	if (n<2)
	return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	int n,t;
	cin>>t;
	while (t--)
	{
	
		cin>>n;
		int j=0;
		for (int i=2; i<=n; i++)
		
			if (nt(i)) 
		{
			cout<<i<<" ";	
		}
		cout<<endl;
	}
	return 0;
}
