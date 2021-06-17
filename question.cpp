#include<bits/stdc++.h>
using namespace std;
void result(list<string> lst);
int main() {
    list<string> myLst;
    string n;
    while(1) {
        cin>>n;
        if(n == "done") {
            break;
        }
        else {
            myLst.push_back(n);
        }
    }
    result(myLst);
    return 0;
}
void result(list<string> lst) {
    int maxNum = 0;
    int minNum = INT16_MAX;
    for(auto &x : lst) {
        try {
            int num = stoi(x);
        }
    }
}