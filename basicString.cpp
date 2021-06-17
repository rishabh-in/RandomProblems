#include <iostream>
#include<bits/stdc++.h>
#include<string>
#include<typeinfo>
using namespace std;

int main() {
	int t, n;
    cin>>n;
    cout<<n<<" "<<typeid(n).name()<<endl;
    string s = to_string(n);
	cout<<s<<" "<<typeid(s).name()<<endl;
    reverse(s.begin(), s.end());
    cout<<s<<endl;
	return 0;
}