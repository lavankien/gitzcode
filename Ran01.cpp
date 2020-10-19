#include <iostream>
#include <vector>
using namespace std;
void nhap(int v[],int n){
	for (int i=0; i<n; i++)
		cin>>v[i];
}
int tong(int v[],int n,int l,int r){
	int sum=0;
	for (int i=l; i<=r;i++)
		sum+=v[i];
	return sum;
}
using namespace std;
int main(){
	int t,q;
	cin>>t;
	int v[1000];
	while(t--){
		int n,l,r;
		cin>>n;
		cin>>q;
		nhap(v,n);
		while(q--)
		{
			cin>>l>>r;
			cout<<tong(v,n,l-1,r-1)<<endl;
		}
		cout<<endl;
	}
	return 0;	
}


