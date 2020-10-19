#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector <int> entry(n);
        for(auto &item: entry)
            cin >> item;
        sort(entry.begin(), entry.end());
        cout << entry[k-1];
        cout << "\n";
    }
    return 0;
}
