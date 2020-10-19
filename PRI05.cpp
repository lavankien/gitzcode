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
	int n,m,t;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for (int i=n; i<=m; i++)
			if (nt(i)) cout<<i<<" ";
		cout<<endl;
//		if (n%2==1 and m%2==1)
//			for (int i=n; i<=m;i+=2)
//				if (nt(i)) cout<<i<<" ";
//		else
//		if (n%2==0 and m%2==1)
//			for (int i=n+1; i<=m+1;i+=2)
//				if (nt(i)) cout<<i<<" ";
//		else if(n%2==1) 
//			for (int i=n; i<=m+1;i+=2)
//				if (nt(i)) cout<<i<<" ";
//		cout<<endl;
//				
//			
	}
	return 0;
}
