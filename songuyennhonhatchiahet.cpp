#include <iostream>
using namespace std;
int GCD (int a, int b) {
  	int tmp;
    while(b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
long long LCM(int a, int b) 
{
    return (long long )(a/GCD(a,b))*b;
}

int main () {
    int t;
    int n;
	cin>>t;
    while (t--) {
    	do 
    	{
    		cin>>n;
    		
		}while (n<1||n>10000);
    	long long  temp=1;
    	for (int i=2;i<=n;i++) {
    		temp=LCM(temp,i);
		}
		cout<<temp<<endl;
	}
    return 0;
}
