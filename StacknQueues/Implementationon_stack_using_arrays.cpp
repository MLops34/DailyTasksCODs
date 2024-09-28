#include <bits/stdc++.h>
using namespace std;

class MyStack{
    private:
    int arr[1000];
    int top;

    public:
    MyStack() {top=-1 ;}
    int pop();
    void push(int);
    int size();
};

void MyStack ::push(int x) {
    // Your Code
    top++;
    arr[top]=x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    int z=0;
    if(top==-1){
        return -1;
    }
    else{
        z=arr[top];
        top--;
        return z;
    }
}

int MyStack ::size(){
    return top+1;
}

int main() {
    MyStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;
    
    return 0;
}