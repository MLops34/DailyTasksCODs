
#include <iostream>

using namespace std;

class Node{
public:
    Node* prev;
    int data;
    Node* next;

    Node()
    {
        prev = nullptr;
        data = 0;
        next = nullptr;
    }

    Node(int value)
    {
        prev = nullptr;
        data = value;
        next = nullptr;
    }
};



Node *deleteHead(Node *head) {

  // Write your code here.
    if (head==NULL || head->next==NULL) return NULL;
    Node *temp=head;
    head=head->next;
    head->prev=nullptr;
    temp->next=nullptr;
    delete temp;
    return head;
}
