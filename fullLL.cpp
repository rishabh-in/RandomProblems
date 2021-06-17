#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
};
void insertFront(Node **head_ref, int val) {        // Pointer to the head pointer
    Node *newNode = NULL;
    newNode = new Node();
    newNode->data = val;
    if(*head_ref == NULL) {
        *head_ref = newNode;
    }
    newNode->next = *head_ref;
    *head_ref = newNode;
}
void insertBetween(Node *prev, int val) {
    if(prev == NULL) {
        cout<<"Insertion not possible, Previous node not found"<<endl;
        return;
    }
    Node *newNode = new Node();
    newNode->data = val;
    newNode->next = prev->next;
    prev->next = newNode;
}
void insertBack(Node **head_ref, int val) {
    Node *newNode = new Node();
    newNode->data = val;
    
    if(*head_ref == NULL) {
        *head_ref = newNode;
    } 
    Node *start = *head_ref;
    while(start->next != NULL) {
        start = start->next;
    }
    start->next = newNode;
    newNode->next = NULL;
}
void deleteKeyElement(Node **head_ref, int key) {
    Node *temp = *head_ref, *prev;
    if(temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) {
        cout<<"Key is not present"<<endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
}
void deleteByPosition(Node **head_ref, int position) {
    Node *temp = *head_ref, *prev;
    if(position == 0) {
        *head_ref = temp->next;
        delete temp;
        return;
    }
    for(int i = 0; i < position; i++) {
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL || temp->next == NULL) {
        return;
    }
    prev->next = temp->next;
    delete temp;

}
void printLinkedList(Node *n) {

    while(n != NULL) {
        cout<<n->data<<" ";
        n = n->next;
    }
    cout<<"\n";
}
int main() {
    Node *head = NULL;
    head = new Node();

    head->data = 10;
    head->next = NULL;

    insertFront(&head, 20);
    printLinkedList(head);

    insertBack(&head, 30);
    printLinkedList(head);

    insertBetween(head->next, 40);
    printLinkedList(head);

    deleteKeyElement(&head, 30);
    printLinkedList(head);

    deleteByPosition(&head, 1);
    printLinkedList(head);
}