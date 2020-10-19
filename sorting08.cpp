#include <bits/stdc++.h>
using namespace std;
long count(int b[],int m,int d[],int x){
	if (x==0) return 0;
	if (x==1) return d[0];
	int tmp=upper_bound(b,b+m,x)-b;
	
	long ans=m-tmp;
	ans+=d[0]+d[1];
	if (x==2) ans-=(d[3]+d[4]);
	if (x==3) ans+=d[2];
	return ans;
}
//x^y>y^x: => y>x(ngoai ra con cac truong hop dac biet
// x=2,3,...
//y=0, y<1; => x^y<y^x
//x=0, Moi y thi x^y<=y^x
//x=1,y=0; x^y>y^x=> d[0]+=1;
//x=2,y=3 or y=4 x^y<y^x =>dem - dem(y4)-dem(y3);
//x=3,y=2 ; x^y>y^x => dem+=dem(y2);
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m;
		int a[100000],b[100000];
		cin>>n>>m;
		int d[10]={0};
		for (int i=0; i<n; i++)
			cin>>a[i];
		
		for (int j=0; j<m; j++){
			cin>>b[j];// tim cac so trong mang Y[] ma nho hon 5 de xet truong hop dac biet
			if (b[j]<5) d[b[j]++];
		}
		sort(b,b+m);
		long res=0;
		for (int i=0; i<n ;i++){
			res+=count(b,m,d,a[i]);//xet moi lan a[i], voi dieu kien mang Y[],
		}// de tang gia tri cua ket qua len
		cout<<res<<endl;
	}
	return 0;
}
