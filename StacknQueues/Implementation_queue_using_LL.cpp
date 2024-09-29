void MyQueue:: push(int x)
{
        // Your Code
        QueueNode *newNode=new QueueNode(x);
        if(front==NULL){
            front=rear=newNode;
        }else{
            rear->next=newNode;
            rear=newNode;
        }
}

//Function to pop front element from the queue.
int MyQueue :: pop()
{
        int data=0;
        if(front==NULL) return -1;
        else{
            QueueNode *temp=front;
            data=front->data;
            front=front->next;
            delete(temp);
            return data;
        }
}