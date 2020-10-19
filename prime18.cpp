#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,a,b;
        cin>>m>>n>>a>>b;
        int count=0;
        for (int i=m; i<=n; i++){
            if (i%a==0 or i%b==0) count++;
        }
        cout<<count<<endl;
        /* code */
    }
    

    return 0;
}