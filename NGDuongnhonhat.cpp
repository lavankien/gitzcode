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
        /* di chuyen phan thu lon hon key ve sau so voi vi tri 
        ban dau cua no*/
        while (j >= 0 && arr[j] > key) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = key;  
    }  
}
int Min(long long a[],long long n)
{
	long long dem=0,b[1000000],j=0;
	for(long long i=0; i<n; i++)
		if (a[i]<0) {
			dem++;
		}
		else
			b[j++]=a[i];
	bool check=false;
	if (dem==n-1) 
	{
		check=true;
		return 1;
	}
	else
	{
		insertionSort(a,n);
		if (a[n-1]==0) 
		{	
			check=true;
			return 1;
		}
	}
	insertionSort(b,j);
	if (check==false)
	{
		
		for (long long i=0; i<j;i++)
			{
				if (b[i]+1!=b[i+1])
					{
						return b[i]+1; 
						break;
					}
			}
	}
  }  
int main()
{
	long long a[100000];
	long long t,n,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		nhap(a,n);
		cout<<Min(a,n)<<endl;
		
	}
	return 0;
}
