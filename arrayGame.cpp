#include<iostream>
using namespace std;
int arrSum(int a[], int n);
int small(int a[], int n);
int main() {
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int sum, smallest;
    sum = arrSum(arr,n);
    smallest = small(arr, n);

    int minMoves;
    minMoves = sum - (n*smallest);
    cout<<minMoves<<endl;
    return 0;
}
int arrSum(int a[], int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s += a[i];
    }
    cout<<s<<endl;
    return s;
}
int small(int a[], int n) {
    int small = INT16_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] < small) {
            small = a[i];
        }
    }
    return small;
}