#include<bits/stdc++.h>
using namespace std;
class Queue {
    stack<int> s1, s2;

    public:
    void enqueue(int ele);
    void dequeue();
    void printQueue();
    int front();
};
void Queue::enqueue(int ele) {
    s1.push(ele);
    cout<<"Element inserted is: "<<ele<<endl;
}
void Queue::dequeue() {
    if(s1.empty() && s2.empty()) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    while(!s1.empty()) {
         s2.push(s1.top());
         s1.pop();
    }
    cout<<"The popped element is: "<<s2.top()<<endl;
    s2.pop();
}
int Queue::front() {
    if(s1.empty()) {
        return s2.top();
    }
}

int main() {
    Queue q1;
    for(int i = 0; i < 5; i++) {
        q1.enqueue(i);
    }
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();
    q1.dequeue();

}