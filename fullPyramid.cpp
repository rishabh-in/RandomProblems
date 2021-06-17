#include<iostream>
using namespace std;
int main() {
    int i, spaces;
    int n; cin>>n;
    spaces = n*n - 2;
    for(i = 0; i < n; i++) {
        for(int j = 0; j < spaces; j++) {
            cout<<" ";
        }
        spaces--;
        for(int j = 0; j < i; j++) {
            cout<<"* ";
        }
        cout<<"\n"; 
    }
}