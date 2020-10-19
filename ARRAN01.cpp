#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, q, ql, qr;
        cin >> n >> q;
        ll res = 0;
        vector <ll> entry(n);
        for(auto &item: entry)
            cin >> item;
        while(q--) {
            cin >> ql >> qr;
            for(int i = ql-1; i < qr; i++)
                res += entry[i];
            cout << res << "\n";
            res = 0;
        }
    }
    return 0;
}
