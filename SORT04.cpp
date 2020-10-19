// #include <iostream>
// using namespace std;
// #include <vector>
// #include <set>
// #include <algorithm>
// vector<int> printIntersection(vector<int> arr1[], vector <int> arr2[], int m, int n) 
// { 
//     int i = 0, j = 0; 
//     vector <int> kqua;
//     while (i < m && j < n) { 
//         if (arr1[i] < arr2[j]) 
//             i++; 
//         else if (arr2[j] < arr1[i]) 
//             j++; 
//         else /* if arr1[i] == arr2[j] */
//         { 
//             kqua.push_back(arr2[j]);
//             i++; 
//             j++; 
//         } 
//     } 
//     return kqua;
// } 
// using namespace std;
// int main(){
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n,m;
//         cin>>n>>m;
//         vector <int> a(n),b(m),res;
//         for (auto &it: a){
//             cin>>it;
//             res.push_back(it);
//         }
//         for (auto &it: b){
//             cin>>it;
//             res.push_back(it);
//         }
//         for (int i=0 ;i<k ;i++)
//         sort(res.begin(),res.end());
//         set <int> s(res.begin(),res.end());
//         set <int> :: iterator it=s.begin();
//         for (it; it!=s.end();it++)
//         {
//             cout<<*it<<" ";
//         }
//         printIntersection(a,b,n,m);
        
//     }
    
//     return 0;
// }
// C++ program to find intersection of 
// two sorted arrays 
#include <bits/stdc++.h> 
using namespace std; 
#include <vector>
#include <algorithm>
/* Function prints Intersection of arr1[] and arr2[] 
m is the number of elements in arr1[] 
n is the number of elements in arr2[] */
void printUnion(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; 
    vector <int> res;
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
        //  {   cout << arr1[i++] << " "; 
                res.push_back(arr1[i++]);

  
        else if (arr2[j] < arr1[i]) {
            // cout << arr2[j++] << " "; 
            res.push_back(arr2[j++]);
  		}
        else 
		{ 
            // cout << arr2[j++] << " "; 
            res.push_back(arr2[j++]);
            i++; 
        } 
    } 
    // sort(res.begin(),res.end());
    // for (int i=0; i<res.size();i++)
    // {
    //     cout<<res[i]<<" ";
    // }
  
    /* Print remaining elements of the larger array */
    while (i < m) {
        // cout << arr1[i++] << " "; 
        res.push_back(arr1[i++]);
    }
    while (j < n) {
        // cout << arr2[j++] << " "; 
        res.push_back(arr2[j++]);
    }
     sort(res.begin(),res.end());
    for (int i=1; i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
} 
void printIntersection(int arr1[], int arr2[], int m, int n) 
{ 
    int i = 0, j = 0; bool check=false;
    while (i < m && j < n) { 
        if (arr1[i] < arr2[j]) 
            i++; 
        else if (arr2[j] < arr1[i]) 
            j++; 
        else /* if arr1[i] == arr2[j] */
        { 
            cout << arr2[j] << " "; 
            check=true;
            i++; 
            j++; 
        } 
    } 
    if (!check) cout<<"-1";
} 
  
/* Driver program to test above function */
int main() 
{ 
    int t;
    cin>>t;
    while (t--)
    {
        int m,n,a[10000],b[10000];
        cin>>m>>n;
        for (int i=0; i<m; i++){
            cin>>a[i];
        }
        sort(a,a+m);
        for (int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(b,b+m);
        printUnion(a,b,m,n);
        cout<<endl;
        printIntersection(a, b, m, n); 
        cout<<endl;
    }
    
    // int m = sizeof(arr1) / sizeof(arr1[0]); 
    // int n = sizeof(arr2) / sizeof(arr2[0]); 
  
    // // Function calling 
    //         printIntersection(arr1, arr2, m, n); 
  
    return 0; 
} 