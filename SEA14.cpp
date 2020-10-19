#include <iostream>
#include <vector>
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
		bool check[10000001] = {false};
		vector <ll> input(n);
		ll res=-1;
		bool timthay=false;
		for (auto &it: input){
			cin>>it;
			if (check[it] and !timthay){
				res=it;
				timthay=true;
			}
			else
			{
				check[it]=true;
			}
		}
        cout << res << endl;
	}
}
