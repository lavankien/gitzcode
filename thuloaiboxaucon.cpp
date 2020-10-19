#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str,deletee;
	getline(cin,str);
	fflush(stdin);
	getline(cin,deletee);
	while(true)
	{
		int pos=str.find(deletee);
		if (pos==string::npos) break;
		str.erase(pos,deletee.length());
		
	}
	cout<<str;
	return 0;
}
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string s;
//    string needToEl;
//    getline(cin, s);
//    cin >> needToEl;
//    string word;
//    for(auto item : s) {
//        if(item != ' ')
//            word += item;
//        else {
//            if(word != needToEl)
//                cout << word << " ";
//            word = "";
//        }
//    }    
//    if(word != "" and word != needToEl)
//        cout << word;
//    return 0;
//}
