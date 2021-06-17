#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[20] = {0};
    for(int i = 0; i < 20; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    string s;
    cin>>s;
    for(int i = 0; i < s.length(); i++) {
        int ch = s[i];
        cout<<ch<<" ";
        arr[ch - 97] += 1;
    }
    cout<<endl;
    for(int i = 0; i < 20; i++) {
        cout<<arr[i]<<" ";
    }
}