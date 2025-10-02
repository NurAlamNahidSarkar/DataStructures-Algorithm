#include<iostream>
#include<stdlib.h>

using namespace std;

struct Stack
{
    int top;
    int stack_size;
    int * items;
};

Stack * createStack(int capacity)
{
    Stack * pt = (Stack*)malloc(sizeof(Stack));

	pt->stack_size = capacity;
	pt->top = -1;
	pt->items = (int*)malloc(sizeof(int) * (capacity));

	return pt;
}

int isEmpty(Stack * pt)
{
    if(pt->top == -1)
        return 1;
    return 0;
}

int isFull(Stack * pt)
{
    if(pt->top == ((pt->stack_size)-1))
        return 1;
    return 0;
}

void push(Stack * pt, int data)
{
    if(isFull(pt))
    {
        cout<<"Stack is Full"<<endl;
        return;
    }

    pt->top++;
    pt->items[pt->top] = data;
    cout<<"Pushed to stack"<<endl;
    return;
}

void pop(Stack * pt)
{

    if(!isEmpty(pt))
    {
        cout<<"popping.."<<endl;
        pt->top--;
    }
    else
    {
        cout<<"Stack is empty"<<endl;
    }
}

int peek(Stack * pt)
{
    if(isEmpty(pt))
    {
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    int data;
    data=pt->items[pt->top];
    return data;
}

int main()
{
    Stack *mystack=createStack(2);
    push(mystack,5);
    push(mystack,6);
    pop(mystack);
    //push(mystack,7);
    //cout<<peek(mystack);
    cout<<peek(mystack);


}
