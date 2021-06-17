#include<iostream>
#include<string>
using namespace std;
int main() {
    string alpha = "polikujmnhytgbvfredcxwqaz";
    string given = "abcd";
    for(int i = 0; i<alpha.length(); i++) {
        if(given.find(alpha[i]) != string::npos) {
            cout<<alpha[i];
        }
    }
}