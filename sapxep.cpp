#include <iostream>
#include <vector>
using namespace std;
void nhap(int a[],int n)
{
	for (int i=0; i<n; i++)
		cin>>a[i];
}
void insertionSort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int x = a[i];
		int j = i;
		while (j > 0 && a[j - 1] > x)
		{
			a[j] = a[j - 1];
			j--;
		}
		a[j] = x;
	}
}
int tim(int a[],int n)
{
	int b[100]; int result;
	int j = 0;
	for (int i = 0; i< n; i++){
		if(a[i] > 0){
			j++;
			b[j] = a[i];
		}
	}
	// Khong co a[i] > 0
	if (j < 0){
		return result = 1;
	}
	insertionSort(b,j);
	for (int k=0; k<=j; k++)
		if (b[k]+1!=b[k+1])
			{
			return b[k]+1;
			break;
			}
	//S?p x?p m?ng b tãng d?n
	//Duy?t ð? t?m result trên m?ng b thôi
}
using namespace std;
int main()
{
	int n,t,a[100];
	cin>>t;
	while(t--)
	{
		cin>>n;
		nhap(a,n);
		cout<<tim(a,n)<<endl;
	}	
	return 0;
}
