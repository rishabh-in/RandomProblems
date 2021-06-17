#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int precedence(char op) {
    if(op == '+' || op == '-') {
        return 1;
    }
    else if(op == '*' || op == '/') {
        return 2;
    }
    else{
        return 0;
    }
}
int eval(int val1 , int val2, char op) {
    if(op == '+') {
        return val1 + val2;
    }
    else if(op == '-') {
        return val1 - val2;
    }
    else if(op == '*') {
        return val1 * val2;
    }
    else if(op == '/') {
        return val1 / val2;
    }
}

int expressionEvalution(string s) {
    int i;
    stack<int> values;
    stack<char> ops;
    for(i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        
        else if(s[i] == '(') {
            ops.push(s[i]);
        }

        else if(isdigit(s[i])) {
            int val = 0;
            while(i < s.length() && isdigit(s[i])) {
                val = (val*10) + (s[i] - '0');
                i++;
            }
            values.push(val);
        }
        else if(s[i] == ')') {
            while(!ops.empty() && s[i] != '(') {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                int result = eval(val1, val2, op);
                values.push(result);
            }
            if(ops.top() == '(') {
                ops.pop();
            }
        }
        else {
            while(!ops.empty() && precedence(ops.top()) >= precedence(s[i])) {
                int val2 = values.top();
                values.pop();

                int val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                int result = eval(val1, val2, op);
                values.push(result);
            }
            ops.push(s[i]);
        }
    }
    while(!ops.empty()) {
        int val2 = values.top();
        values.pop();

        int val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        int result = eval(val1, val2, op);
        values.push(result);
    }
    return values.top();
}

int main() {
    string exp;
    getline(cin,exp);
    int result;
    result = expressionEvalution(exp);
    cout<<result<<endl;
    return 0;
}