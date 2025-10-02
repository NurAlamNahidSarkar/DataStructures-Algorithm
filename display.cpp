#include <iostream>
using namespace std;
/*
struct node
{
    int data;
    node *next;
    node *prev;
} *head, *tail;

void insert(int n)
{
    if (head == NULL)
    {
        head = new node();
        cout << "Empty linked list!" << endl;
        cout << "Insert head: ";
        cin >> head->data;
        head->next = NULL;
        // head->prev = NULL;
        tail = head;
    }
    else
    {
        node *temp = new node();
        cout << "Input Data: ";
        cin >> temp->data;
        temp->next = NULL;
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
*/

// Declare node
struct Node
{
    int num;
    Node *next;
};

// Starting (Head) node
struct Node *head = NULL;

// Insert node at start
void insert(int n)
{
    struct Node *new_node = new Node;
    new_node->num = n;
    new_node->next = head;
    head = new_node;
}

void display()
{
    if (head == NULL)
        cout << "Linked List is empty";
    else
    {
        Node *dis = head;
        while (dis != NULL)
        {
            cout << dis->num << " ";
            dis = dis->next;
        }
    }
    cout << endl;
}

int main()
{
    /*head = tail = NULL;
    cout << "Create a linked list: ";
    cin*/
    insert(1);
    insert(2);
    insert(5);
    insert(3);
    insert(2);
    insert(7);
    insert(6);
    display();
    return 0;
}