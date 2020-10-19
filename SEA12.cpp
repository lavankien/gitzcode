#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        vector <int> res; int n,x;
        int a[10000];
        cin>>n>>x;
        for (int i=0; i<n ;i++){
            cin>>a[i];
            res.push_back(a[i]);
        }
        sort(res.begin(),res.end());
        bool check=false;
        for (int i=0; i<n/2; i++){
            for (int j=i+1; j<n; j++){
                if (res[j]-res[i]==x){
                    cout<<1;
                    check=true;
                    break;
            }
        }}
        if (!check){
            for (int i=n/2;  i<n; i++){
            for (int j=i+1; j<n; j++){
                if (res[j]-res[i]==x){
                    cout<<1;
                    check=true;
                    break;
            }
        }
        }}
        if (!check) cout<<-1;
        cout<<endl;
    }
    return 0;
}