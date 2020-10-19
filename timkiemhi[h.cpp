#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n,x,a;
        cin>>n>>x;
        bool ok=false;
        for(int i=0; i<n ;i++){
            cin>>a;
            if (x==a) ok=true;
        }
        if (ok) cout<<1;
        else cout<<-1;
        cout<<endl;
    }
}
