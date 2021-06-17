#include<iostream>
using namespace std;
int main() {
    int i, j;
    int n; cin>>n;
    for(i = 0; i < n; i++) {
        char ch = 97 + i;
        for(j = 0; j <= i; j++) {
            cout<<ch;
        }

        cout<<"\n";
    }
}