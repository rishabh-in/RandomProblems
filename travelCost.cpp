#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> cost;
    list<int>::iterator ptr;
    int n, m;
    for(int i = 0; i<n; i++) {
        int val;
        cin>>val;
        cost.push_back(val);
    }
    for(auto i = cost.begin(); i!= cost.end(); i++) {
        cout<<*i<<" ";
    }
}