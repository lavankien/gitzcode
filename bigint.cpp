#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string mul(string s1,string s2){
    vector <int> res1,res2;
    for (int i=0; i<s1.size(); i++){
            res1.push_back(s1[i]-'0');
    }
    for (int i=0; i<s2.size(); i++){
            res2.push_back(s2[i]-'0');
    }
    vector <vector  <int> > res(s2.size());
    int index=0; // hang de cong cac thanh phan cho ra ket qua
    for (int i=s2.size()-1 ; i>=0; i--){
        int t=0;
        while (t<index)
        {
            /* code */
            res[index].push_back(0);
            t++;
        }
        int nho=0,so=0;
        for (int j=s1.size()-1;j>=0; j--){
            so=res2[i]*res1[j]+nho;
            res[index].push_back(so%10);
            nho=so/10;
        }
        if (nho>0) res[index].push_back(nho);
        while (res[index].size()<s1.size()+s2.size()){
            res[index].push_back(0);
        }
        reverse(res[index].begin(),res[index].end());
        index++;
    }
    int nho=0; string ans="";
    for (int j=res[0].size()-1; j>=0;j--){
        int so=nho;
        for (int i=0; i<res.size();i++){
            so+=res[i][j];
        }
        ans=char(so%10+'0')+ans;
        nho=so/10;
    }
    if (nho>0) ans= char(nho+'0')+ans;
    while(ans[0]=='0') ans.erase(ans.begin());
    return ans;

}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string a,b;
        cin>>a;
        cin>>b;
        cout<<mul(a,b)<<"\n";
    }
    return 0;
}