#include <iostream>
#include <math.h>
//using ll=long long;
using namespace std;
void selectionSort(long long  arr[],  long long n)
{
    long long i, j, min_idx;
    // Di chuy?n ranh gi?i c?a m?ng dã s?p x?p và chua s?p x?p
    for (i = 0; i < n-1; i++)
    {
    // Tìm ph?n t? nh? nh?t trong m?ng chua s?p x?p
    min_idx = i;
    for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
        min_idx = j;
 
    // Ð?i ch? ph?n t? nh? nh?t v?i ph?n t? d?u tiên
        swap(arr[min_idx], arr[i]);
    }
}
void nhap(long long a[],long long n)
{
	for (long long i=0; i<n; i++)
		cin>>a[i];
}
int NguyenDuongMin(long long a[],long long n) {
	long long dem=0;
	long long b[1000],k;
	for (long long i=0; i<n ;i++)
		if (a[i]<0) dem++;
	if (dem==n) return 1;
	else
	{
		selectionSort(a,n);
		if (a[n-1]==0) return 1;
	}
	int j=0;
	for (long long i=0; i<n ;i++)
		if (a[i]>0) 
			{
				b[j]=a[i];
				j++;
			}
	selectionSort(b,j);
	for (long long i=0; i<j; i++)
		if (b[i]+1!=b[i+1])
			return b[i]+1;
}
int main()
{
	long long t,n,a[100000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		nhap(a,n);
		cout<<NguyenDuongMin(a,n)<<endl;
	}
	return 0;
}
