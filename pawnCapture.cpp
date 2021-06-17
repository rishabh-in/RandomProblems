#include<iostream>
using namespace std;

int main() {
    int t, result;
    int n, k;
    cin>>t;
    while(t) {
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        int val = -1, minTurn = 9999;
        for(int i = 0; i < n; i++ ) {
            if(k % arr[i] == 0) {
                int tempMin = k / arr[i] - 1;
                if(tempMin < minTurn) {
                    minTurn = tempMin;
                    val = arr[i];
                }
            }
        }
        cout<<val<<endl;
        t -= 1;
    }
    return 0;
}