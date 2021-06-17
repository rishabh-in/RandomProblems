#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        bool flag = true;
        int a = 0;
        int longPre = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '<') {
                a++;
            }
            else {
                a--;
            }
            if(a < 0) {
                cout<<i<<endl;
                flag = false;
                break;
            }
            if(a == 0) {
                longPre = i+1;
            }
        }
        if(flag) {
            cout<<longPre<<endl;
        }
    }
}