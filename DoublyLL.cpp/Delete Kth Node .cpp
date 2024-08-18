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


Node* deleteNode(Node* head, int x) {
        // Your code here
        if(head==NULL || head->next==NULL) return NULL;

        Node *temp=head;
        int cnt=0;
        while(temp){
            cnt++;
            if(cnt==x){
                break;
            }
            temp=temp->next;
        }
        Node *back=temp->prev;
        Node *front=temp->next;
        
        if(back==NULL) { 
            front=head; 
            if(front) front->prev = nullptr;
            delete temp;
        }
        else if (front ==NULL)  { 
            back->next = nullptr; 
            delete temp;
        }
        else{
            back->next=front;
            front->prev=back;
            temp->next=nullptr;
            temp->prev=nullptr;
            delete temp;
        }
        return head;
}