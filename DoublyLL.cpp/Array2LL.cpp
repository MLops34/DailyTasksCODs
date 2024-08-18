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

Node *array2dLL(int arr[], int size){
    Node *head=new Node(arr[0]);
    Node *temp=head;
    for(int i=1;i<size;i++){
        Node *newNode=new Node(arr[i]);
        temp->next=newNode;
        newNode->prev=temp;
        temp=newNode;
    }
    return head;
}

void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main(){
    int arr[]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node *head = array2dLL(arr, size);
    print(head);

    return 0;
}