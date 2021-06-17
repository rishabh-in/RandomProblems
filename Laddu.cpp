#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        string origin;
        cin>>n>>origin;
        int laddu = 0;
        for(int i = 0; i < n; i++) {
            string activity;
            cin>>activity;
            if(activity == "CONTEST_WON") {
                int rank;
                cin>>rank;
                laddu += 300 ;
                if(rank <= 20) {
                    laddu += 20 - rank;
                }
            }
            else if(activity == "TOP_CONTRIBUTOR") {
                laddu += 300;
            }
            else if(activity == "BUG_FOUND") {
                int severity;
                cin>>severity;
                laddu += severity;
            }
            else if(activity == "CONTEST_HOSTED") {
                laddu += 50;
            }
            else
            {
                assert(false);
            }
            
        }
        int month;
        if(origin == "INDIAN") {
            month = laddu / 200;
        }
        else if (origin == "NON_INDIAN")
        {
            month = laddu / 400;
        }

        cout<<month<<"\n";
        
    }
}