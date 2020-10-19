#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int check(string s,char x){
    int dem=0;
    for (int i=0; i<s.size(); i++){
        if (x==s[i]) dem++;
    }
    return dem;
}
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin,s);
        for (int i=0; i<s.size(); i++){
            if (check(s,s[i])==1)
                cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}