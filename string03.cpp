#include <iostream>
#include <vector>
#include <string>
#include <set>
using namespace std;
int main(){
	int t;
	cin>>t;
	while (t--){
		
		string str,word;
		fflush(stdin);
		getline(cin,str);
		
		vector <string> res;
		set <string> s;
		for (int i=0; i<str.size();i++){
			if (str[i]!=' '){
				word+=str[i];
			}
			else {
				res.push_back(word);
				s(res.begin(),res.end());
				word="";
			}
			}
		cout<<res.size()<<endl;
		cout<<s.size();
	}
	return 0;
}
