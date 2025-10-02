#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
}*head, *tail;

void insertAtHead()
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
        head = tail;
        head->next=temp;
        temp->next=NULL;
        
    }
}

void insertAtTail()
{
    node *temp = new node();
    cout<<"Input: ";
    cin>>temp->data;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        node *cur = head;
        while (cur->next !=NULL)
        {
            cur = cur->next;
            
        }
        cur->next= temp;
    }
}

void display()
{
    node *temp2;
    temp2 = head;
    while (temp2 != NULL)
    {
        cout<<temp2->data<<" ";
        temp2 = temp2->next;
    }
    cout<<endl;
}


void deleteAtTail()
{
    if(tail == NULL)
    {
        cout<<"Linked List Is Empty!";
    }
    else if (head == tail)
    {
        tail = NULL;
        head = tail;
    }
    else
    {
        node *cur = head;
        while (cur->next->next != NULL )
        {
            cur->next = cur;
        }
        tail = cur;
        tail->next = NULL;
    }
}

void deleteAtHead()
{
    if (head == NULL)
    {
        cout<<"Linked List Is Empty!";
    }
    else
    {
        head = head->next;
    }
    
}

void delete_at_k(int k)
{
    node *cur = head;
    for (int i = 1; i < k-1; i++)
    {
        cur = cur->next;
    }
    cur->next = cur->next->next;
}

void insert_at_k(int k)
{
    node *cur = head;
    cout<<"Input: ";
    node *temp = new node();
    cin>>temp->data;
    for (int i = 1; i < k-1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    cur->next = temp;
}


int main()
{
    head = NULL;
    tail = NULL;

    cout<<"Please Choose:"<<endl;
    cout<<"1. Insert At Head"<<endl<<"2. Insert At Tail"<<endl<<"3. Display"<<endl<<"4. Delete At Tail"<<endl<<"5. Delete At Head"<<endl<<"6. Delete At a position"<<endl<<"7. Insert At a position"<<endl<<"8. End"<<endl;
    int i;
    cout<<endl;
    cout<<"Choose: ";
    cin>>i;

    while (i<=7)
    {
       if(i==1)
        {
            cout<<endl;
            insertAtHead();
        }
        else if(i == 2)
        {
            cout<<endl;
            insertAtTail();
        }
        else if(i == 3)
        {
            cout<<endl;
            display();
        }
        else if(i == 4)
        {
            cout<<endl;
            deleteAtTail();
        }
        else if(i == 5)
        {
            cout<<endl;
            deleteAtHead();
        }
        else if(i == 6)
        {
            cout<<endl;
            cout<<"Which Position: ";
            int p;
            cin>>p;
            delete_at_k(p);
        }
        else
        {
            cout<<"Which Position: ";
            int p;
            cin>>p;
            insert_at_k(p);
        }
        cout<<endl;
        
        cout<<"Please Choose:"<<endl;
        cout<<"1. Insert At Head"<<endl<<"2. Insert At Tail"<<endl<<"3. Display"<<endl<<"4. Delete At Tail"<<endl<<"5. Delete At Head"<<endl<<"6. Delete At a position"<<endl<<"7. Insert At a position"<<endl<<"8. End"<<endl;
        cout<<"Choose: ";
        cin>>i;
    }
}