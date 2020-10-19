// #include<iostream> 
// using namespace std;
// using ll=long long; 
// ll mod(string number, ll a) 
// { 
//     ll res = 0; 
//     for (ll i = 0; i < number.length(); i++) 
//         //  res = (res*10 + (int)num[i] - '0') %a; 
//         {
//             res=res*10+(number[i]-'0');
//             res%=a;
//         }
//     return res; 
// } 

// int main() 
// { 
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     cin.ignore();
//     while (t--)
//     {
//         string s; ll M;
//         getline(cin,s);
//         cin>>M;
//         cout<<mod(s,M)<<endl;
//     }
//     return 0; 
// }
#include <bits/stdc++.h>

using namespace std;

using ll = long long;
ll mod(string number, ll a) 
{ 
    ll res = 0; 
    for (ll i = 0; i < number.length(); i++) 
        {
            res=res*10+(number[i]-'0');
            res%=a;
        }
    return res; 
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin>>s;
        ll m; cin>>m;
        cout<<mod(s,m)<<endl;
   
    }
    return 0;
}