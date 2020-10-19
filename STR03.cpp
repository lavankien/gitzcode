#include <iostream>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int res = 0;
        if(s[s.size()-1] == '1') 
            res++;
        for(int i = 0; i < s.size()-1; i++) {
            if(s[i] == '1')
                switch((s.size()-i-2)%4) 
                {
                    case 0:
                        res+=2;
                        break;
                    case 1:
                        res+=4;
                        break;
                    case 2:
                        res+=8;
                        break;
                    default:
                        res+=6;
                }
            // cout << res << " ";
        }
        if(res%5==0)
            cout << "Yes";
        else 
            cout << "No";
        // cout << res;
        cout << "\n";
    }
    return 0;
}