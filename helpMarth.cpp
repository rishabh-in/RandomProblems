#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin>>t;
    while(t--) {
        string s;
        cin>>s;
        int x1, y1;
        cin>>x1,y1;
        int nOfQ;
        cin>>nOfQ;
        for(int i = 0; i < nOfQ; i++) {
            int lenOfsub = 0;
            int x2,y2;
            cin>>x2>>y2;

            for(int j = 0; j < s.size(); j++) {
                if(x1 < x2 && s[j] == 'R') {
                    x1 += 1;
                    lenOfsub++;
                }
                else if(x1 > x2 && s[j] == 'L') {
                    x1 -= 1;
                    lenOfsub++;
                }
                else if(y1 < y2 && s[j] == 'U') {
                    y1 += 1;
                    lenOfsub++;
                }
                else if(y1 > y2 && s[j] == 'D') {
                    y1 -= 1;
                    lenOfsub++;
                }
                else {
                    assert(false);
                }
                cout<<"x1 is"<<x1<<" "<<"x2 is"<<x2;
                cout<<"y1 is"<<y1<<" "<<"y2 is"<<y2;
            }
            if(x1 == x2 && y1 == y2) {
                cout<<"YES"<<" "<<lenOfsub<<"\n";
            }
            else {
                cout<<"NO"<<"\n";
            }
        }
    }
}