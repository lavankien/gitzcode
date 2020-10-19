#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	ios_base::synce_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector <int> res(n);
		for (auto &it: res){
			cin>>it;
		}
		int count=0;
		sort(res.begin(),res.end());
		for (int i=0; i<res.size(); i++){
			if (res[i+1]-res[i]>=2)
				count++;
		}
		cout<<count<<endl;
	}
}
