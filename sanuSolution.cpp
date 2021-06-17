#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input1, input2, input3;
    float result1, result2, result3,finalResult;
    bool flag = true;
    while(flag) {
        cin>>input1>>input2>>input3;
        if(input1 == "Ab"){
            result1 = 0;
        }
        else {
            result1 = ceil(stof(input1)/2);
        }
        if(input2 == "Ab"){
            result2 = 0;
        }
        else {
            result2 = ceil(stof(input2)/2);
        }
        if(input3 == "Ab"){
            result3 = 0;
        }
        else{
            result3 = stof(input3)*2;
        }

        finalResult = result1 + result2 + result3;
        cout<<"FinalResult is: "<<finalResult<<endl;

    }
    
}