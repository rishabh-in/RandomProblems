#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int t, num;
    float chefDigit, rickDigit, Pc, Pr;
    cin>>t;
    while(t!=0) {
        cin>>Pc>>Pr;
        if(Pc < 9 && Pr < 9) {
            cout<<1<<" "<<1<<endl;
            t -= 1;
            continue;
        }
        chefDigit = ceil(Pc / 9);
        rickDigit = ceil(Pr / 9);
        if(chefDigit < rickDigit) {
            cout<<0<<" "<<chefDigit<<endl;
        }
        else if(chefDigit > rickDigit) {
            cout<<1<<" "<<rickDigit<<endl;
        }
        else {
            cout<<0<<" "<<rickDigit<<endl;
        }
        t -= 1;
    }
    return 0;
}