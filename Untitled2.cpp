#include <iostream>
#include <fstream>
using namespace std;
void insertionSort(float arr[], int n) 
{ 
    float key;
    int i, j; 
    for (i = 1; i < n; i++) { 
        key = arr[i]; 
        j = i - 1; 
        while (j >= 0 && arr[j] < key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
}
void doctep(float a[], int& n) {
    fstream f;
    f.open("input.dat", ios::in);
    f >> n;
    for(int i = 0; i < n; i++) 
        f >> a[i];
    f.close();
}
void ghitep(float a[], int n) {
    fstream f;
    f.open("output.dat", ios::out);
    for(int i = 0; i < n; i++) {
        f << a[i] << " ";
    }
    f.close();
}
int main() {
    float a[] = {0, 4 ,3};
    int n = 3;
    doctep(a, n);
    insertionSort(a, n); 
    ghitep(a, n);
    return 0;
}
