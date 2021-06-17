#include<bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin>>s;
    int arrL[26] = {0}, arrR[26] = {0};

    for(int i = 0; i < s.length() / 2; i++) {
        int ch = s[i];      // store the ascii of the character
        arrL[ch - 97] += 1;
    }

    for(int i = (s.length() + 1) / 2; i < s.length(); i++) {
        int ch = s[i];      // store the ascii of the character
        arrR[ch - 97] += 1;
    }
    for(int i = 0; i < 26; i++) {
        cout<<arrL[i]<<" ";
        cout<<arrR[i]<<" ";
    }
    cout<<"\n";

    bool isSame = true;
    for(int i = 0; i < 26; i++) {
        if(arrL[i] != arrR[i]) {
            isSame = false;
            break;
        }
    }

    if(isSame) {
        cout<<"YES \n";
    }
    else {
        cout<<"NO \n";
    }
}