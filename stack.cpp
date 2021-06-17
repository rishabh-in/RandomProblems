#include<iostream>
using namespace std;
#define size 1000
class Stack {
    int top;
    public:
    int arr[size];
    Stack() {
        top = -1;
    }
    void push(int ele);
    void pop();
    int peek();
};
void Stack::push(int ele) {
    if(top >= size-1) {
        cout<<"Stack overflow"<<endl;
        return;
    }
    else {
        top++;
        arr[top] = ele;
    }
}
void Stack::pop() {
    if(top < 0) {
        cout<<"Stack is empty"<<endl;
        return;
    }
    cout<<"Popped element is: "<<arr[top]<<endl;
    top--;
}
int Stack::peek() {
    if(top < 0) {
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else {
        return arr[top];
    }
}
int main() {
    Stack s1;
    for(int i = 1; i <= 10; i++) {
        s1.push(i*10);
    }
    for(int i = 0; i < 5; i++) {
        cout<<s1.peek()<<" ";
        s1.pop();
    }
    return 0;
}