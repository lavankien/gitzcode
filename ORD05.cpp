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
        int a[10000],n;
        cin>>n;
        vector <int> res;
        for (int i=0; i<n; i++){
            cin>>a[i];
            res.push_back(a[i]);
        }
        int result =0;
        for (int i=0; i<n ;i++){
            for (int j=i+1; j<n-1; j++){
                if (a[j]>a[i] ){
                    if (result<a[j]-a[i])
                        result=a[j]-a[i];
                }
            }
        }
        if (!result) cout<<-1; 
        else cout<<result;
        cout<<endl;
    }
    return 0;
}