#include<bits/stdc++.h>
using namespace std;

#define LP(i, a, b) for(int i = a; i < b; i++)

void merge(int arr[], int low, int mid, int high) {
    int i, j, k;
    
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++) 
        L[i] = arr[low + i]; 
    
    mid++;
    for (j = 0; j < n2; j++) 
        R[j] = arr[mid + j];

    i = 0, j = 0, k = low;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i += 1;
        }
        else{
            arr[k] = R[j];
            j += 1;
        }
        k++;
    }

    while(i < n1) {
        arr[k] = L[i];
        i += 1;
        k += 1;
    }

    while(j < n2) {
        arr[k] = R[j];
        j += 1;
        k += 1;
    }
}
void mergeSort(int arr[], int low, int high) {
    if(low < high) {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n, l, h;
    cin>>n;
    int arr[n+1] = {0};   
    LP(i, 0, n) {
        cin>>arr[i];
    }
    cout<<"\nArray before sorting: \n";
    LP(i, 0, n) {
        cout<<arr[i]<<" ";
    }
    mergeSort(arr, 0, n-1);

    cout<<"\n";
    cout<<"Array after sorting: \n";
    LP(i, 0, n) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}