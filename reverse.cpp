#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t!=0) {
		string s;
		string s1;
	    cin>>s;
	    for(auto i = s.rbegin(); i!=s.rend(); i++) {
				s1.push_back(*i);
		}
		auto ptr = s1.begin();
		while(*ptr == '0') {
			ptr++;
		}
		s1.erase(s1.begin(), ptr);
		cout<<s1<<endl;
	    t -= 1;
	}
	return 0;
}