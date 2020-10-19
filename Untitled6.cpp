#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    vector <string> res;
    string temp = "";
    for(auto &item: s) 
	{
        item = tolower(item);
    }
    for(int i = 0; i < s.size(); i++) 
	{
        if(s[i] != ' ') 
		{
            temp += s[i];
        }
        else 
		{
            res.push_back(temp);
            temp = "";
        }
    }
    if(temp != "")
        res.push_back(temp);
    cout<<res.size();
    for (int i=0; i<res.size(); i++)
    	cout<<res[i]<<endl;
    string output = "";
    output += res[res.size()-1];
    for(int i = 0; i < res.size()-1; i++)
        toupper(res[i][0]);
  	for (int i=0; i<output.size(); i++)
  	{
  		tolower(output[i]);
	  }
	cout<<output;
    return 0;
}
