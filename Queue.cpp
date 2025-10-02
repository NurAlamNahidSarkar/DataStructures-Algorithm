#include<iostream>
#include<stdlib.h>

using namespace std;

struct Queue{
    int queue_size;
    int q_front;
    int q_rear;
    int occupied;
    int * items;
};

Queue * createQueue(int capacity)
{
    Queue * pt = (Queue*)malloc(sizeof(Queue));

    pt->queue_size = capacity;
    pt->q_front = 0;
    pt->q_rear = 0;
    pt->occupied = 0;
    pt->items = (int*)malloc(sizeof(int) * capacity);

    return pt;
}

int isFull(Queue * pt)
{
    if(pt->occupied == pt->queue_size)
        return 1;
    return 0;
}


int isEmpty(Queue * pt)
{
    if(pt->occupied==0)
        return 1;
    return 0;
}

void enqueue(Queue * pt, int data)
{
    if(isFull(pt))
    {
        cout<<"Queue is Full"<<endl;
    }
    else
    {
        cout<<"Enqueueing Value.."<<endl;
        pt->items[pt->q_rear] = data;
        pt->q_rear = (pt->q_rear + 1) % pt->queue_size;
        pt->occupied++;
    }
}


void dequeue(Queue * pt)
{
    if(!isEmpty(pt))
    {
        cout<<"Dequeueing "<<pt->items[pt->q_front]<<endl;
        pt->q_front = (pt->q_front+1) % pt->queue_size;
        pt->occupied--;
    }
    else
    {
        cout<<"Queue is Empty"<<endl;
    }
}


int top(Queue * pt)
{
    if(isEmpty(pt))
    {
        cout<<"Queue is Empty"<<endl;
        return -1;
    }
    else
        return pt->items[pt->q_front];

}

int main()
{


    Queue * q1 = createQueue(5);

    enqueue(q1,10);
    int temp = top(q1);
    cout<<temp<<endl;
    dequeue(q1);
    dequeue(q1);
    return 0;
}

