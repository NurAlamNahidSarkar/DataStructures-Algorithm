#include<iostream>

using namespace std;

struct node{
    int data;
    node *next;
}*head,*tail;


void insert()
{
    if(head==NULL)
    {
        head=new node();
        cout<<"Input: ";
        cin>>head->data;
        head->next=NULL;
        tail=head;
    }
    else
    {
        node *temp=new node();
        cout<<"Input: ";
        cin>>temp->data;
        tail->next=temp;
        temp->next=NULL;
        tail=temp;
    }
}

void display()
{
    node *temp2;
    temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }
    cout<<endl;
}

void Delete()
{
    if(tail==NULL)
    {
        cout<<"Linked List is empty"<<endl;
    }
    else if(head==tail)
    {
        tail=NULL;
        head=tail;
    }
    else
    {
        node *cur=head;
        while(cur->next->next!=NULL)
        {
            cur=cur->next;
        }
        tail=cur;
        tail->next=NULL;
    }
}
void insert_at_k(int k)
{
    cout<<"Input: ";
    node *temp=new node();
    cin>>temp->data;
    node *cur=head;
    for(int i=1;i<k-1;i++)
    {
        cur=cur->next;
    }

    temp->next=cur->next;
    cur->next=temp;

}
int main()
{
    head=NULL;
    tail=NULL;
    cout<<"Please Choose:"<<endl;
    cout<<"1.Insert"<<" "<<"2.Display"<<" "<<"3.Delete at Tail"<<" "<<"4.Insert at a position without head"<<"5.END"<<endl;
    int i;
    cin>>i;
    while(i<=4)
    {
        if(i==1)
        {
            insert();
        }
        else if(i==2)
        {
            display();
        }
        else if(i==3)
        {
            Delete();
        }
        else
        {
            cout<<"Which Position: ";
            int p;
            cin>>p;
            insert_at_k(p);
        }
        cout<<"Please Choose:"<<endl;
        cout<<"1.Insert"<<" "<<"2.Display"<<" "<<"3.Delete at Tail"<<" "<<"4.Insert at a position"<<"5.END"<<endl;
        cin>>i;
    }
}