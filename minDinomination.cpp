#include<iostream>
using namespace std;
int minDinomination(int price);
int main(){
    int n, maxPrice;
    cin>>n;
    while(n != 0) {
        cin>>maxPrice;
        int result = minDinomination(maxPrice);
        cout<<result;
        n -= 1;
    } 
}
int minDinomination(int price) {
    int count = 0;
    while (price > 0) {
        price = price / 2;
        count += 1;
    }
    return count;
} 