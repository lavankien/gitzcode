#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin.ignore();
        getline(cin, s);
        vector <string> res;
        string temp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ' and s[i] != '\t' and s[i] != '\n')
                temp += s[i];
            else {
                if(temp != "")
                    res.push_back(temp);
                temp = "";
            }
        }
        if(temp != "")
            res.push_back(temp);
        cout << res.size() << "\n";
    }
    return 0;
}