#include<iostream>
#include<list>
using namespace std;
int generatePrimeSum(int);
int main() {
    int t, n, result;
    cin>>t;
    while(t) {
        cin>>n;
        result = generatePrimeSum(n);
        cout<<result<<endl;
        t -= 1;
    }    
}
int generatePrimeSum(int n) {
    list<int> t;
    
    for (int i = 2; i <= n; i++) {
        bool flag = true;
        for(int j = 2; j < i; j++) {
            if(i % j == 0) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            t.push_back(i);
        }
    }

    list<int>::iterator ptr = t.begin();
    advance(ptr,2);
    
    int count = 0;                         // Used to increse the iterator pointer..
    for(auto i = ptr; i != t.end(); i++) {
        int sum = 0;
        for(int &x: t) {
            sum += x;
            if(sum == *i) {
                count += 1;
                break;
            }
            else if(sum > *i) {
                break;
            }
        }
    }
    return count;
}
