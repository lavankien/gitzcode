#include <iostream>
#include <vector>
#include <math.h>

using namespace std;
const long long def = 10000000000;
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        long long temp = n;
        for(int i = 2; i <= sqrt(temp); i++)
            while(n % i == 0 && n != 1) {
                cout << i << " ";
                n /= i;
            }
        if(n != 1)
            cout << n;
        cout << "\n";
    }
    return 0;
}
