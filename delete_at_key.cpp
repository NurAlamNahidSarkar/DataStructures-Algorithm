#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
} *head, *tail;

void remove()
{

    int key;
    cout << "The key position you want to delete : ";
    cin >> key;
    node *cur = new node();
    for (int i = 1; i < key - 1; i++)
    {
        cur = cur->next;
    }
    cur->next = cur->next->next;
    cur->next->prev = cur;
}
