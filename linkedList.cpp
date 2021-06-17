#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next = NULL;
};
void printLL(Node *n) {
        while(n != NULL) {
            cout<<n->data<<" ";
            n = n->next;
    }
}
int main() {
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    printLL(head);
    return 0;
}