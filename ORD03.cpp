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
        int a[10000],n,k;
        vector <int> res;
        cin>>n>>k;
        for (int i=0; i<n*n; i++){
            cin>>a[i];
            res.push_back(a[i]);
        }
        sort(res.begin(),res.end());
        for (int i=0; i<n*n; i++){
            if (i==k-1)
             {
                 cout<<res[i];
                break;
             }
        }
        cout<<endl;

    }
    return 0;
}