#include <bits/stdc++.h>
#include <time.h>
#include <ctime>
using namespace std;

using ll = long long;
void dem(int a[],int n){
    int i,j,f[10000];
    for (i=1; i<=n; i++)
    {
        f[a[i]]=1;
    }
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if (a[i]<a[j]) f[a[i]]++;
        }
    }
    sort(f,f+n);
    cout<<f[n-1];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        int a[10000],n;
        cin>>n;
        srand((int)time(NULL));
        for (int i=0; i<n; i++){
            a[i]=rand()%20;
            cout<<a[i]<<" ";
        }
        cout<<endl;
        dem(a,n);
        cout<<endl;
    }
    return 0;
}
