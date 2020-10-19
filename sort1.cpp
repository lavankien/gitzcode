#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll=long long;
void HoanVi(int &a, int &b)
{
   int temp = a;
   a = b;
   b = temp;
}
void InsertionSort(int A[], int n)
{
   for(int i = 0; i<n-1; i++)
   {
      for(int j = i+1; j>0; j--)
      if(A[j] > A[j-1])
         HoanVi(A[j],A[j-1]);
   }
}
using ll=long long;
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		int n;
        cin >> n;
        vector <int> entry(n);
        for(auto &item: entry)
            cin >> item;
        vector <int> arr1 = entry, arr2 = entry;
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int lenA1 = 0, lenA2 = entry.size();
        int dem = 0;
        for(int i = 0; i < n; i++) {
            if(dem == n)
                break;
            cout << arr1[n-i-1] << " ";
            dem++;
            if(dem == n)
                break;
            cout << arr2[i] << " ";
            dem++;
        }
        cout << "\n";
		
	
	}
	return 0;
}
