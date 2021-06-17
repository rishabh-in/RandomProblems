#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int sum = 0;
    int rem;
    int m = n;
    while(m!=0) {
        rem = m%10;
        sum = sum + rem;
        m = m/10;
    }
    cout<<sum<<endl;
    if(n%sum == 0) {
        int result = n/sum;
        cout<<result<<endl;
    }
    else {
        cout<<"0"<<endl;
    }
    return 0;
}