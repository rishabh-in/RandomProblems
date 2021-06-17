#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t!=0) {
        int n;
        long long result;
        cin>>n;
        array<int, > arr;
        for(int i = 0; i< n; i++) {
            cin>>arr[i];
        }
        for(int i = 0; i< n; i++) {
            cout<<arr[i];
        }
        cout<<endl;
        sort(arr.begin(), arr.end() , greater<int>());
        int maxRevenue, temp, tempRevenue, k = 1;
        maxRevenue = arr[0];
        for(int i = 0; i < n; i++) {
            temp = arr[i];
            tempRevenue = temp * k;
            if(tempRevenue > maxRevenue) {
                maxRevenue = tempRevenue;
                k += 1;
            }
            else {
                k += 1;
            }
        }
        cout<<maxRevenue<<endl;
        t -= 1;
    }
}