  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode *newNode=new StackNode(x);
        newNode->next=top;
        top=newNode;
    }

    int pop() {
        // code here
        if(top==NULL) return -1;
        StackNode *temp=top;
        int data=top->data;
        top=top->next;
        delete(temp);
        return data;
        
    }

    MyStack() { top = NULL; }
};