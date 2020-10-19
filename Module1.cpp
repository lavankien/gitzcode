#include <iostream>
#include <math.h>

using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        long long x, y, p;
        long long kqua = 1;
        cin >> x >> y >> p;
        while(y--) {
            kqua = ((x % p) * kqua % p)%p;
        }
        cout << kqua << "\n";
    }
    return 0;
}

