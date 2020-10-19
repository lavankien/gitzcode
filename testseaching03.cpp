#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; 
	cin>>t;
	cin.ignore();
	while(t--){
		int a[100001],n;
		cin>>n;
		for (int i=1; i<n; i++){
			cin>>a[i];	
	}
		for (int i=1 ;i<n; i++){
			if(a[i]+1!=a[i+1])
			{
				cout<<a[i]+1;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
