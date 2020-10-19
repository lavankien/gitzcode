#include <iostream>
#include <vector>
#include <algorithm>
using ll=long long;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> input(n);
		for (auto &it: input){
			cin>>it;
		}
		ll res=10e9;
//		sort(res.begin(),res.end());
		for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++)
                if(abs(input[i]+input[j]) < abs(res))
                    res = input[i]+input[j];
        }
        cout << res << endl;
	}
}
