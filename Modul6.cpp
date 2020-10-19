#include <bits/stdc++.h>
using ll=long long;
using namespace std;
ll mod(string s, ll m){
    int number=0;
    for (int i=0; i<s.length();i++){
        number=number*10+(s[i]-'0');
        number%=m;
    }
    return number;
}
//ham a^b
//b=0; return 1; b==1; return a;
// a^4=a^2*a^2
//a^5=a^2*a^2*a (truong hop b mod 2==1 thi nhan them a)
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string a;
        int b,m;
        cin>>a;
        cin>>b;
        cin>>m;
        ll first=mod(a,m);
        ll ans=first;;
        for(ll i=1; i<b/2; i++){
        	ans=(ans%m*first%m)%m;
		}
		cout<<b/2;
		for (ll i=b/2;i<b;  i++){
			ans=(ans%m*first%m)%m;
		}
        cout<<ans<<endl;
    }
    return 0;
}
// #include <bits/stdc++.h>
// #include <math.h>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <set>
// const long long m=1e9+7;;
// using namespace std;

// using ll = long long;
// //ham nhan 2 so a,b;
// //b=0
// //a*5=a*2+a*2+a
// ll mul(ll a,ll b ){
//     if (a==0||b==0) return 0;
//     ll temp=mul(a,b/2);
//     if (b&1) return (a+temp)%m;
//     return temp%m;
// }
// //ham a^b
// //b=0; return 1; b==1; return a;
// // a^4=a^2*a^2
// //a^5=a^2*a^2*a (truong hop b mod 2==1 thi nhan them a)
// ll pow(ll a, ll b ){
//     if (b==0) return 1;
//     if (b==1) return a%m;
//     ll temp=pow(a,b/2);
//     temp=mul(temp,temp);
//     if (b&1) return a*temp%m;
//     return temp%m;
// }
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     cin.ignore();
//     while(t--) {
//         ll a,b;
//         cin>>a>>b;
//         cout<<pow(a,b);
   
//     }
//     return 0;
// }
