#include <iostream>
#include  <string>
#include <vector>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        fflush(stdin);
        getline(cin,s);
        string tam;
        vector <string> res;
        for (int i=0; i<s.size(); i++){

            if (s[i]!= ' '){
                tam+=s[i];
            }
            else if (s[i]==' ')
            {
                res.push_back(tam);
                tam="";
                res.push_back(" ");
            }
    	}
        if(tam != "")
            res.push_back(tam);
        for(int i = res.size()-1; i >= 0; i--)
            cout << res[i];
        cout<<endl;
	}
    return 0;
}