#include <iostream>
#include <math.h>
using namespace std;
int nt(int n){
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n);i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,t;
	cin>>t;
	cin.ignore();
	while(t--){
		cin>>n;
		for (int j=n; j>0; j--)
				if (nt(j) and nt(n-j))
					{
						cout<<n-j<<" "<<j;
						break;
					}
		cout<<endl;
	}
	return 0;
}
