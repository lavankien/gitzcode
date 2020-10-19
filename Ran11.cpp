#include <iostream>
#include <vector>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    	int n; cin>>n;
    	vector <int> a(n);
    	for (auto &it: a){
    		cin>>it;
		}
		int res=10e6;
		for (int i=0; i<n-1; i++)
			for (int j=i+1; j<n; j++){
				if (abs(a[i]-a[j])<res)
					res=abs(a[i]-a[j]);
			}
		cout<<res<<endl;
	}
	return 0;
}
