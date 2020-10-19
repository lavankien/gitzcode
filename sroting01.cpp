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
            int n;
            cin>>n;
            vector <int> a(n);
            for (int i=0; i<n; i++){
                cin>>a[i];
            }
            sort(a.begin(),a.end());
            int i,j;
            for (i=0,j=a.size()-1; i<j; i++, j--){
                cout<<a[j]<<" "<<a[i]<<" ";
            } 
            if (i==j) cout<<a[i];
            cout<<endl;
    }
    return 0;
}
