#include <iostream>
using namespace std;
#include <map>
 
int main(){
	int t;
    int N;
    cin>>t;
    while (t--)
    {
    cin >> N;   
    map<int, int> m;
    for(int i = 2; i <= N; i++){
        while(N % i == 0){
            m[i]++;
            N /= i;
        }
    }    
  	for(auto it : m){
        cout << it.first << " " << it.second << " ";
    }
    cout<<endl;
	}
}
