#include <iostream>
#include <vector>
#include <set>
#include <math.h>
using ll=long long;
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> res;
		ll temp = n;
		int j=0;
        for(ll i = 2; i <=sqrt(temp); i++) {
            while(n % i ==0 ) {
            	res.push_back(i);
           	 	n/=i;
            }
		}
		set <ll> thu(res.begin(),res.end());
		if ((res.size()==3) 
		
	}
	return 0;
}
