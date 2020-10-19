#include <iostream>
using namespace std;
#include <math.h>
#include <Algorithm>
int nt(int n)
{
	if (n<2) return 0;
	for (int i=2; i<=sqrt(n); i++)
		if (n%i==0) return 0;
	return 1;
}
void result(int n)
{
	int j=0,k=0;;int a[1000],b[1000];
	for(int i = 2; i <=n; i++){
        while(n % i == 0){
            n/= i;
            a[j]=i;
            j++;
        }
	
    for (int i=0; i<j; i++)
    {
		if (a[i]==a[i+1])
    	{
    		b[k++];
		}
}}

	for (int i=0; i<k; i++)
		cout<<b[k];
}
int main()
{
	int n;
	int t;
	cin>>t;
	while(t--)
	{
	
	cin>>n;
	result(n);
	cout<<endl;
	
	}
	return 0;
}
