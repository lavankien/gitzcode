#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin>>t;
	cin.ignore();
	while(t--){
		int a,n;
		cin>>n;
		int d[n+5]={0};
		for (int i=1; i<n; i++){
			cin>>a;
			d[a]=1;
		}
		for (int i=1; i<n ;i++){
			if(d[i]==0) 
			{
				cout<<i<<" ";
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
