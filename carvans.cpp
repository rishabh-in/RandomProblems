#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--) {
        cin>>n;
        ll arr[n+1];
        for(int i = 0; i< n; i++) {
            cin>>arr[i];
        }
        if(n == 1) {
            cout<<1<<endl;
        }
        else {
            ll maxCount = 1;
            ll curSpeed = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] < curSpeed) {
                    maxCount += 1;
                    curSpeed = arr[i];
                }
            }
            cout<<maxCount<<endl;
        }
    return 0;
}