#include<bits/stdc++.h>
using namespace std;
int calculatePlateform(int arrival[],int depart[], int n);
int main() {
    int n; cin>>n;
    string arr, dep;
    string temp;
    cin.ignore();
    getline(cin, arr);
    getline(cin, dep);

    int arrival[n] = {0};
    int depart[n] = {0};

    cout<<arr.find("(")<<"\n";
    for(auto &x:arr) {

        cout<<x;
    }
    cout<<"\n";
    for(int i = 0, j = 0; arr[i]; i++) {
        if(arr[i] == '(') {
            break;
        }
        else if(arr[i] == ' ') {
            continue;
        }
        else {
            int num = (int)(arr[i]) - 48;
            cout<<"arr[i]: "<<arr[i]<<" num: "<<num<<" j: "<<j<<"\n";
            arrival[j] = num;
            j++;
        }

    }
    cout<<"\n";
    for(int i = 0, j = 0; dep[i]; i++) {
        if(arr[i] == '(') {
            break;
        }
        else if(arr[i] == ' ') {
            continue;
        }
        else {
            int num = (int)(dep[i]) - 48;
            cout<<"dep[i]: "<<dep[i]<<" num: "<<num<<" j: "<<j<<"\n";
            depart[j] = num;
            j++;
        }

    }
    cout<<"\n";
    for(int i = 0; i < n; i++) {
        cout<<arrival[i]<<" ";
    }
    cout<<"\n";
    for(int i = 0; i < n; i++) {
        cout<<depart[i]<<" ";
    }
    cout<<"\n";
    int result;
    result = calculatePlateform(arrival, depart, n);
    cout<<result<<endl;
    return 0;
}
int calculatePlateform(int arrival[], int depart[], int n) {
    int r = 1;
    int plateform = 0;
    int i = 1;
    int j = 0;
    while(i < n && j < n) {
        if(arrival[i] <= depart[j]) {
            plateform++;
            i++;

            if(r < plateform) {
                r = plateform;
            }
        }
        else {
            plateform--;
            j++;
        }
    }
    return r;
}