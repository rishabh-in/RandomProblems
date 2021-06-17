#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        long long arr[n+1];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }

        long long currentLimit = arr[0];
        long long maxToken = arr[0];
        for(int i = 1; i < n; i++) {
            int m = min(arr[i], currentLimit);
            maxToken += m;
            currentLimit = m;
        }

        cout<<maxToken<<endl;

    }
}