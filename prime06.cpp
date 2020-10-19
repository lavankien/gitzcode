#include <iostream>
using namespace std;
#include <math.h>
int nt(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0 )return 0;
	}
	return 1;
}
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i=2; i<n/2;i++)
		{
			bool check=false;
			for (int j=n-1; j>n/2;j--)
			{
				if (nt(i) and nt(j))
					if (i+j==n){
						check=true;
						cout<<i<<" "<<j<<endl;
						break;
					}
			}
			if (check) break;
		}}
	return 0;
}
