#include<iostream>

using namespace std;

struct stack{
    int data;
    stack *next;
}*head,*temp;


void push(int value)
{
   stack *n=new stack();
   n->data=value;
   n->next=head;
   head=n;
}
void pop()
{
        stack *n=head;
        head=head->next;
        delete n;
}
int peek()
{
    if(head==NULL)
    {
        return -1;
    }
    return head->data;
}

void display()
{
    if(head==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else{
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    }
}
int main()
{
    head=NULL;
    cout<<"1.Push 2.Pop 3.Display 0.Exit"<<endl;
    int n;
    cin>>n;
    while(n!=0)
    {
        if(n==1)
        {
            int p;
            cout<<"Enter Data: ";
            cin>>p;
            push(p);
        }
        else if(n==2)
        {
            int i;
            i=peek();
            if(i==-1)
            {
               cout<<"Stack is empty"<<endl;
            }
            else
            {
                int n=peek();
                cout<<"Popped Data: "<<n<<endl;
                pop();
            }
        }
        else if(n==3)
        {
            display();
        }
        cout<<"1.Push 2.Pop 3.Display 0.Exit"<<endl;
        cin>>n;
    }
}

