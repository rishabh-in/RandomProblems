#include<iostream>
#include<bits/stdc++.h> 
#include<string>
using namespace std;

int main() {
    int t, n, mid;
    cin>>t;
    while(t!=0) {
        string s, s1, s2;
        cin>>s;
        n = s.size();
        mid = n / 2;
        if(n % 2 == 0) {
            s1 = s.substr(0, mid);
            s2 = s.substr(mid);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1 == s2) {
                cout<<"YES"<<endl;
            } 
            else {
                cout<<"NO"<<endl;
            }
        }
        else {
            s1 = s.substr(0,mid);
            s2 = s.substr(mid+1);
            sort(s1.begin(), s1.end());
            sort(s2.begin(), s2.end());
            if(s1 == s2) {
                cout<<"YES"<<endl;
            } 
            else {
                cout<<"NO"<<endl;
            }
        }
        t -= 1;
    }
    
    return 0;
}