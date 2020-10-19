#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t=1;
    while(t--) {
        int n;
        cin >> n;
        // n=5;
        vector <int> entry (n);
        for(auto &item: entry)
            cin >> item;
        sort(entry.begin(), entry.end());
        if(entry[n-1] <= 0) {   //gia su so am
            cout << 1 << "\n";
            continue;
        }
        bool found1 = false;
        for(int i = 0; i < n; i++)
            if(entry[i] == 1) {
                found1 = true;
                break;
            }
        if(!found1) {
            cout << 1 << "\n";
            continue;
        }
        bool found = false;
        int start = -1;
        for(int i = 0; i < n; i++) {
            if(entry[i] > 0) { //tim so dau tien lon hon 0
                start = i;
                break;
            }
        }
        bool end = false;
        for(int i = start; i < n-1; i++) {
            if(entry[i+1] - entry[i] >= 2) {
                cout << entry[i]+1 << "\n";  
                end = true;
                break;
            }
        }
        if(!end)
            cout << entry[n-1]+1 << "\n"; 
    }
    return 0;
}
