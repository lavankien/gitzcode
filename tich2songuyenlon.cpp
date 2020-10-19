#include <bits/stdc++.h>

using namespace std;
void nhan(string s1,string s2){
	int *res;
	res= new int [s1.size() + s2.size()];
	for (int i=0; i<=s1.size()+s2.size();i++) res[i]=0;
	for (int i=s1.size()-1;i>=0; i-- )
		for (int j=s2.size()-1; j>=0; j--){
			res[i+1+j]+=(s1[i]-'0') * (s2[i]-'0');
		}
	vector<int > ans;
	int nho=0;
	for (int i=s1.size()+s2.size(); i>=0; i--){
		if (res[i]>9){
			nho=res[i]/10;
			res[i]+=nho;
			ans.push_back(res[i]%10);
		}
	}
	for (int i=0; i<ans.size(); i++){
		cout<<ans[i];
	}
//	string str="";
//	for (int i=0; i<s1.size()+s2.size();i++){
//		str+=(res[i] + '0');
//	}
//	return str;
}
void xuat(string s){
	for (int i=0; i<s.size(); i++){
		cout<<s[i];
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1;
		cin>>s2;
		nhan(s1,s2);
//		string str=nhan(s1,s2);
//		xuat(str);
//		cout<<endl;
	}
	return 0;
}
