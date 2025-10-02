#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
} *head, *tail;

void insert_postition(int key)
{
    if (head == NULL)
    {
        cout << "The Node is empty" << endl;
        node *temp = head;
        cout << "Input Head data: ";
        cin >> temp->data;
        head = tail;
        head->next = NULL;
        head->prev = NULL;
    }
    else
    {
        node *temp = new node();
        cout << "Postition: ";
        int p;
        cin >> p;
        cout << "Input Data: ";
        cin >> temp->data;
        node *cur = head;
        for (int i = 1; i < p - 1; i++)
        {
            cur = cur->next;
        }
        temp->next = cur->next;
        cur->next = temp;
        temp->prev = cur;
        temp->next->prev = temp;
    }
}