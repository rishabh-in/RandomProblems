#include<iostream>
using namespace std;
int minGifts(int , int []);
int main() {
    int t, n, arr[n], result;
    cin>>t;
    while(t>0) {
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>arr[i];
        }
        result = minGifts(n, arr);
        cout<<result<<endl;
        t -= 1;
    }
}

int minGifts(int n, int arr[]) {
    
    int giftCount = n;     // Each member will get atleast one gift
    
    for(int i = 1; i <= n; i++) {
            if(arr[i] > arr[i-1]) {
                giftCount += 1;
                cout<<"Gift Count is "<<giftCount<<endl;
            }
        }
    return giftCount;
}