#include <iostream>
using namespace std;
#include <math.h>
typedef unsigned long long int lli;
bool nt(int a)
{
	for (int i=2; i<=sqrt(a);i++)
		{
			if (a%i==0) 
			{
				return false;
				break;
			}
		}
	return true;;
	
}
lli GCD (lli a, lli b) {
    lli tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
bool ngtocungnhau(int x)
{
	if (nt(x))
	{
		for (int i=1; i<x; i++)
		{
			if (GCD(x,i)!=1)
				{
					return false; 
					break;
				}
		}
}
int main()
{
	int t,x;
	do
	{
		cin>>t;
	}
	while(t>10);
	while (t--)
	{
		cin>>x;
		if (nt(x)==false)
		{
			cout<<"0"<<endl;
		}
		else
		for (int i=1; i<x; i++)
			if (GCD(x,i))
	}
	return 0;
}
