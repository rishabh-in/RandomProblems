#include<bits/stdc++.h>
using namespace std;
void checker(string str) {
    set<string> s1;
    stringstream ss(str);
    string word;
    int index = 0;
    while(ss>>word) {
        if(s1.count(word)) {
            cout<<word<<" "<<index<<endl;
            s1.insert(word);
        }
        else {
            s1.insert(word);
        }
        index++;
    }
}
int main() {
    string s;
    getline(cin,s);
    checker(s);
    return 0;
}