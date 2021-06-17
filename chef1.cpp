#include <iostream>
#include<math.h>
using namespace std;
int war(float, float);
int main() {
	int t, result;
    float h, p;
    cin>>t;
	while(t!=0) {
	    cin>>h>>p;
        result = war(h, p);
        cout<<result<<endl;
        t -= 1;
	}
    
}
int war(float h, float p)
{
    int i;
    int num = sqrt(p) + 1;
    cout<<num<<endl;
    bool flag = false;
    for(int i = 0; i <= num; i++) {
        h = h-p;
        p = p/2;
        if(h <= 0 and p > 0) {
            flag = true;
            break;
        }
        else if(p <= 0 and h > 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        return 1;
    }
    else {
        return 0;
    }
}
