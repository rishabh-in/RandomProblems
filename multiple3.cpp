#include<bits/stdc++.h>
using namespace std;

typedef long long ll;     // #define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        ll k;
        ll d0, d1;;
        cin>>k>>d0>>d1;

        if(k == 2) {
            if((d0 + d1) % 3 == 0) {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        
        ll lastDigit = (d0 + d1) % 10;
        ll sum = d0 + d1 + lastDigit;

        ll remDigit = k - 3;
        while(remDigit > 0) {
            if(lastDigit == 0) {
                remDigit = 0;
                break;
            }
            else if(lastDigit == 6) {
                ll sets = remDigit/4;
                sum += 20*sets;
                remDigit -= sets*4;

                if(remDigit == 0) {
                    break;
                }
                else if(remDigit == 1) {
                    sum += 2;
                }
                else if(remDigit == 2) {
                    sum += 6;
                }
                else if(remDigit == 3) {
                    sum += 14;
                }
                
                remDigit = 0;
                break;
            }
            else {
                lastDigit = (lastDigit*2) % 10;
                sum += lastDigit;
                remDigit--;
            }
        }
        if((sum % 3) == 0) {
            cout<<"YES"<<"\n";
        }
        else {
            cout<<"NO"<<"\n";
        }
        
    }
}