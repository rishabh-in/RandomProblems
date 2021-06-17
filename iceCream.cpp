#include<bits/stdc++.h>
using namespace std;
void whatFlavors(vector<int> cost, int money) {
    unordered_map<int,int> mp;
    for(int i = 0; i < cost.size(); i++) {
        int target = money - cost[i];
        if(mp[target] != 0) {
            cout<<mp[target]<<" "<<i+1;
            cout<<"\n";
            break;
        }
        else {
            mp[cost[i]] = i+1;
        }
    }

    }
int main() {
    vector<int> v = {1,5,4,3,2};
    int money = 4;
    whatFlavors(v, money);
    return 0;

}