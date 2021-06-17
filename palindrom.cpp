#include<bits/stdc++.h>
using namespace std;
void checker(string s) {
    string temp;
    for(auto i = s.rbegin(); i != s.rend(); i++) {
        temp.push_back(*i);
    }
    for(auto &x:temp) {
        cout<<x;
    }cout<<endl;
    
    if(s == temp) {
        cout<<"True"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
int main() {
    string s;
    cin>>s;
    checker(s);
    return 0;
}