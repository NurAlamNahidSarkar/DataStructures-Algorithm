#include<iostream>

using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
};
node* head = NULL;
node* tail = NULL;


void INsert(int key,int pos)
{
    if(pos == 1)
    {

        if (head == NULL)
        {
            node* temp = new node();
            temp->data = key;
            head = temp;
            tail = temp;
        }
        else
        {
            node* temp = new node();
            temp->data = key;
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    else
    {
        node* temp = new node();
        temp->data = key;
        node* cur = head;
        for (int i = 1; i < pos-1 ; i++)
        {
            cur = cur->next;
        }
        temp->next = cur->next;
        temp->prev = cur;
        cur->next=temp;
    }
}

void SEarch(int key)
{
    if (head == NULL)
    {
        cout << "The Linked List Is Empty"<<endl;
        return;
    }
    node* cur = head;
    while (cur != NULL)
    {
        if (cur->data == key)
        {
            cout << "Found" << endl;
            return;
        }
        cur = cur->next;
    }
    cout << "Not Found" << endl;
}



void REmove(int key)
{
    if (head == NULL)
    {
        cout << "There Is Nothing To Remove"<<endl;
        return;
    }

    node* cur = head;
    while (cur != NULL)
    {
        if (cur->data == key)
        {
            if (cur->next== NULL)
            {
                cur->prev->next =NULL;;
            }
            else if (cur->prev== NULL)
            {
                head=cur->next;

            }
            else
            {
                cur->next = cur->next->next;
                cur->next->prev = cur->prev;
            }
        }
        cur = cur->next;
    }
}

void MIddle()
{
    if (head == NULL)
    {
        cout << "The Linked List Is Empty"<<endl;
        return;
    }

    node*cur=head;
    int element=0;
    while(cur!=NULL)
    {
        element++;
        cur=cur->next;

    }
    int mid = int(element/2);
    cur=head;
    while(mid--)
    {
        cur=cur->next;
    }
    cout<<"The Middle Element Is : "<<cur->data<<endl;

}

void DIsplay()
{
    if (head == NULL)
    {
        cout << "The Linked List Is Empty\n";
        return;
    }
    node*cur=head;
    while(cur!=NULL)
    {
        cout<<cur->data<<" ";
        cur=cur->next;
    }
    cout<<endl;
}


int main()
{
    cout<<"What Do You Want To Do?"<<endl;
    cout<<"1.Insert Data "<<endl<<"2.Search A Key"<<endl<<"3.Remove A Key"<<endl<<"4.Middle Of Linked List"<<endl<<"5.Display The Linked List"<<endl<<"6.END"<<endl;
    cout<<"Choose An Option: ";
    int i;
    cin>>i;

    while (true)
    {
        while(i<=5)
        {
            if(i==1)
            {
                cout << "Postition Of The Data(Position Starts From 1): ";
                int pos,key;
                cin >> pos;
                cout << "Input Data: ";
                cin>>key;
                INsert(key,pos);
            }
            else if(i==2)
            {
                int key;
                cout<<"Give the Key You Want TO Search:";
                cin>>key;
                SEarch(key);
            }
            else if(i==3)
            {
                int key;
                cout << "Give the Key You Want TO Remove: ";
                cin >> key;
                REmove(key);
            }
            else if(i==4)
            {
                MIddle();

            }
            else
            {
                DIsplay();
            }
            cout<<endl<<endl;
            cout<<"What Do You Want To Do?"<<endl;
            cout<<"1.Insert Data "<<endl<<"2.Search A Key"<<endl<<"3.Remove A Key"<<endl<<"4.Middle Of Linked List"<<endl<<"5.Display The Linked List"<<endl<<"6.END"<<endl;
            cout<<"Choose An Option: ";
            cin>>i;
        }
        break;
    }
}
