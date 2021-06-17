#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin>>t;
    while(t--) {
        int g; cin>>g;
        for(int j = 0; j < g; j++) {
            int i, n, q;
            int nOfHead, nOfTail;
            cin>>i>>n>>q;
            if(i == 1) {
                nOfHead = n / 2;
                nOfTail = n - nOfHead;
                if(q == 1) {
                    cout<<nOfHead<<"\n";
                    continue;
                }
                if(q == 2) {
                    cout<<nOfTail<<"\n";
                    continue;
                }
            }
            if(i == 2) {
                nOfTail = n / 2;
                nOfHead = n - nOfTail;
                if(q == 1) {
                    cout<<nOfHead<<"\n";
                    continue;
                }
                if(q == 2) {
                    cout<<nOfTail<<"\n";
                    continue;
                }
            }
        }
    }
}