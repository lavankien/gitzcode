#include <iostream>
using namespace std;
void nhap(long long a[],long long n)
{
	for (int i=0; i<n;i++)
		cin>>a[i];
}
void insertionSort(long long arr[], long long n)  
{  
    int i, key, j;  
    for (i = 1; i < n; i++) 
    {  
        key = arr[i];  
        j = i - 1;  
  
        /* Move elements of arr[0..i-1], that are  
        greater than key, to one position ahead  
        of their current position */
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}  
int main()
{
	long long a[100000];
	long long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		nhap(a,n);
		insertionSort(a,n);
		cout<<a[k-1]<<endl;
		
	}
	return 0;
}
