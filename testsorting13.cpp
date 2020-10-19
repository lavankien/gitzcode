#include <iostream>
using namespace std;
#include <vector> 
#include <algorithm>
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        vector <int> res;
        int n,m,a;
        cin>>n>>m;
        for (int i=0; i<m+n; i++){
            cin>>a;
            res.push_back(a);
        }
        sort(res.begin(),res.end());
        for (int i=0; i<res.size();i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
