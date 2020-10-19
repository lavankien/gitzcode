//#include <iostream>
//#include <math.h>
//#include <algorithm>
//using namespace std;
//using ll=long long;
//void swap(int* a, int* b)  
//{  
//    int t = *a;  
//    *a = *b;  
//    *b = t;  
//}  
//void nhap(ll a[],ll n)
//{
//	for (ll i=0; i<n; i++)
//		cin>>a[i];
//}
//int partition (int arr[], int low, int high)  
//{  
//    int pivot = arr[high]; // pivot  
//    int i = (low - 1); // Index of smaller element  
//  
//    for (int j = low; j <= high - 1; j++)  
//    {  
//        // If current element is smaller than the pivot  
//        if (arr[j] < pivot)  
//        {  
//            i++; // increment index of smaller element  
//            swap(&arr[i], &arr[j]);  
//        }  
//    }  
//    swap(&arr[i + 1], &arr[high]);  
//    return (i + 1);  
//}  
//  
///* The main function that implements QuickSort  
//arr[] --> Array to be sorted,  
//low --> Starting index,  
//high --> Ending index */
//void quickSort(int arr[], int low, int high)  
//{  
//    if (low < high)  
//    {  
//        /* pi is partitioning index, arr[p] is now  
//        at right place */
//        int pi = partition(arr, low, high);  
//  
//        // Separately sort elements before  
//        // partition and after partition  
//        quickSort(arr, low, pi - 1);  
//        quickSort(arr, pi + 1, high);  
//    }  
//}  
//int main()
//{
//	int t;
//	ll n,a[100000];
//	cin>>t;
//	while(t--)
//	{
//		cin>>n;
//		nhap(a,n);
//		sort(a[0],a[n-1]);
//		for (ll i=0; i<n-1; i++)
//			for (ll j=1; j<n; j++)
//				if (a[i]==j or a[j]==i)
//					{
//						swap(a[i],a[j]);
//					}
//		for (ll i=0; i<n; i++)
//			if (a[i]=i)
//				cout<<a[i]<<" ";
//			else cout<<"-1"<<" ";
//		cout<<endl;
//	}
//	return 0;
//}
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector <ll> v;
        v.resize(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.begin(), v.end());
        // for(int i = 0; i < n-1; i++) {
        //     if(v[i] == v[i+1]) {
        //         int next = i+1;
        //         while(v[i] == v[next] and next < n) {
        //             v[next] = -1;
        //         }
        //         i+=next-1;
        //     }
            
        // }
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                if(v[j] == i or v[i] == j) {
                    swap(v[i], v[j]);
                }
            }
        }
        for(int i = 0; i < n; i++)
            if(v[i] == i)
                cout << i << " ";
            else 
                cout << -1 << " ";
        cout << "\n";
        // cout << "hey";
    }
    return 0;
}   
