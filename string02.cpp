#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int temp=0;
		for (int i=0; i<s.size();i++){
			if (i%2==0){
				temp-=s[i]-'0';
			}
			else {	
				temp+=s[i]-'0';	
			}
		}
		if (abs(temp)%11==0) cout<<1;
		else cout<<0;
		cout<<endl;
		
	}
	return 0;
}
