#include<bits/stdc++.h>
using namespace std;
void commonCount(string &);
int main() {
    string s;
    getline(cin, s);
    commonCount(s);
    return 0;
}
void commonCount(string &str) {

    unordered_map<char, int> mp;
    int count = 0;
    stringstream ss(str);
    string s1, s2, word;
    int c = 0;
    c = 1;
    while(ss>>word) {
        if(c == 1){
            s1 = word;
        }
        if (word == "and") {
            continue;
        }
        if(c == 2) {
            s2 = word;
        }
        c++;
    }
    cout<<s1<<" "<<s2<<endl;

    for(char &x: s1) {
        if(mp.count(x)) {
           mp[x] += 1;
        }
        else {
            mp[x] = 1;
        }
    }
    for(auto &x: s2) {
        if(mp.count(x)) {
            count += 1;
            mp[x]--;
        }
        else{
            continue;
        }
    }
    cout<<count<<endl;
}