#include<iostream>
#include<bits/stdc++.h>
#include<unordered_map>
#define ll long long
using namespace std;

void calculateMin(ll [], int, int);
int main() {
    int t, n, k;
    cin>>t;
    while(t!=0) {
        cin>>n>>k;
        ll arr[n+1] = {};
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        calculateMin(arr, n, k);
        t -= 1;
    }
    return 0;    
}

void calculateMin(ll arr[], int n, int k) {
    unordered_map<int, int> intCount;
    for(int i = 0; i < n; i++) {
        intCount[arr[i]] += 1;
    }

    unordered_map<int, int> :: iterator ptr;
    int sameGuest = k;
    for(auto ptr : intCount) {
        if(ptr.second > 1) {
            sameGuest += ptr.second;
        }
    }
    int nOftables = 1;
    for(int i = 1; i < n; i++) {
        if(arr[i] == arr[i-1])
            nOftables += 1;
    }
    int tempCost;
    if(nOftables > 1){
        tempCost = k * nOftables;
    }

    if(tempCost < sameGuest) {
        cout<<tempCost<<endl;
    }
    else{
        cout<<sameGuest<<endl;
    }
    
}