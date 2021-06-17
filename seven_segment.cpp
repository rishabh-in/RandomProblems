#include<bits/stdc++.h>
using namespace std;
int Sticks(int , unordered_map<int,int> &m);
int main() {
    unordered_map<int, int> mp;
    mp[0] = 6;
    mp[1] = 2;
    mp[2] = 5;
    mp[3] = 5;
    mp[4] = 4;
    mp[5] = 5;
    mp[6] = 6;
    mp[7] = 3;
    mp[8] = 7;
    mp[9] = 6;
    mp[100] = 14;
    int t; cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int numOfSticks = Sticks(n, mp);
        if(numOfSticks % 2 == 0) {
            int num = numOfSticks / 2;
            string s;
            for(int i = 0; i < num; i++) {
                s.push_back('1');
            }
            cout<<s<<endl;
        }
        else {
            string s;
            numOfSticks = numOfSticks - 3;
            s.push_back('7');
            int num = numOfSticks / 2;
            for(int i = 0; i < num; i++) {
                s.push_back('1');
            }
            cout<<s<<endl;
        }
         
    }
}
int Sticks(int n, unordered_map<int, int> &m) {
    if(n < 10) {
        return m[n];
    }
    else {
        
    }
}