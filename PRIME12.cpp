#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n; int k; cin>>k;
		long long kq=n,a[10000]={0};
		int j=0;
		for (long long i=2; i<=sqrt(kq); i++)
		{
	
			while( n%i ==0 && n !=1 )
			{
				j++;
				if (j==k) cout<<i<<endl;
				n/=i;
			}
			
		}
		if(n != 1 and k == j+1) {
            cout << n << "\n";
            continue;
        }
		if (j<k) cout<<"-1\n";

	}
}
