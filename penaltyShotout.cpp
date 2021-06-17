#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll goalA = 0, goalB = 0;
        ll counter = 0;
        for(int i = 0;i < s.size(); i++) {
            if(i%2 == 0) {
                if(s[i] == '1'){
                    goalA += 1;
                }
            }
            else {
                if(s[i] == '1') {
                    goalB += 1;
                }
            }
            cout<<"goal a: "<<goalA<<" "<<"Goal b: "<<goalB<<" "<<i<<endl; 
            if(i%2 != 0) {
                if(goalA >= (n-1) && goalB < n-2) {
                    cout<<i+1<<endl;
                    break;
                }
                else if(goalB >= (n-1) && goalA < n-2) {
                    cout<<i+1<<endl;
                    break;
                }
            }
            counter = i;
            
        }
        if(counter == n*2 -1) {
             cout<<counter+1<<endl;
        }
        
    }
}