#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int pair = 0;
        for(int i = 0; i < n; i++ ) {
            for(int j = i+1; j < n; j++) {
                int b = arr[i] && arr[j];
                if(b == arr[i]) {
                    pair++;
                }
            }
        }
        cout<<pair<<endl;
    }
}