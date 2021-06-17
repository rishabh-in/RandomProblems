#include<bits/stdc++.h>
using namespace std;
class Base {
    string name;
    public:
    Base(string ab) {
        name = ab;
    }

    friend void operator +(Base a, Base b) {
        cout<<a.name<<" "<<b.name<<endl;
    }
};
int main() {
    Base obj1("Rishabh"), obj2("Tiwari");
    obj1+obj2;
    cout<<endl;
    operator +(obj1, obj2);
    return 0;
}