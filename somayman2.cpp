#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
string sum(string n){
    int sum=0;
	for (int i=0; i<n.size(); i++){
		sum+=(n[i]-'0');
	}
	string res=to_string(sum);
    return res;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string n;
        cin>>n;
        while(n.size()>1){
            n=sum(n);
        }
        if (n[0]=='9') cout<<1<<endl;
        else cout<<0<<endl;
         
    }
    return 0;
}
