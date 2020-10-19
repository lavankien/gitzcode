#include <bits/stdc++.h>

#include <ctime>
using namespace std;

using ll = long long;
void dem(int a[],int n){
    int b[10000];
    for (int i=0; i<n; i++){
        b[i]=0;
    }
    vector <int> res;
    for (int i=0; i<n-1; i++){
            for (int j=i+1; j<n; j++){
                int count=0;
                if (a[j]>a[i]){
                    b[i]++;
                }
            }
            res.push_back(b[i]);
        }
    sort(res.begin(),res.end());
    cout<<res[res.size()-1];
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
	{
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
