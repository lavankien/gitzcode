#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, s;
    cin >> m >> s;
    // m = 4, s = 37;
    if(s > m*10-m) {
        cout << "-1 -1" << "\n";
        return 0;
    }
    if(s == 0) {
        cout << "-1 -1" << "\n";
        return 0;
    }
    s--;
    string res_min = "1";
    for(int i = 0; i < m-1; i++)
        res_min+="0";
    int maxTrans = s;
    int start = m-1;
    while(maxTrans) {
        if(maxTrans>9) {
            res_min[start--] = '9';
            maxTrans -= 9;
        }
        else {
            res_min[start] = char(res_min[start]+maxTrans);
            maxTrans = 0;
            start--;
        }
    } 
    string res_max = "1";
    for(int i = 0; i < m-1; i++)
        res_max+="0";
    int minTrans = s;
    if(minTrans > 8) {
        res_max[0] = '9';
        minTrans -= 8;
    }
    else if(minTrans >= 1){
        res_max[0] = char(minTrans + 1 + '0');
        minTrans = 0;
    }
    else {
        minTrans = 0;
    }
    start = 1;
    while(minTrans) {
        if(minTrans>9) {
            res_max[start++] = '9';
            minTrans -= 9;
        }
        else {
            res_max[start++] = char(minTrans+'0');
            minTrans = 0;
        }
    } 
    // if(res_min == res_max)
    //     cout << "-1 -1";
    // else 
    cout << res_min << " " << res_max;
    cout << "\n";
    return 0;
}
