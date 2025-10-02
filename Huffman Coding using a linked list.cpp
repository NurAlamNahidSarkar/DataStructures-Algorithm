#include <iostream>
using namespace std;


struct Node {
    char data;
    int freq;
    Node* left;
    Node* right;
    Node* next;

    Node(char d, int f) {
        data = d;
        freq = f;
        left = right = next = NULL;
    }
};

Node* insertSort(Node* head, Node* newNode) {
    if (!head || newNode->freq < head->freq ||
        (newNode->freq == head->freq && newNode->data < head->data)) {
        newNode->next = head;
        return newNode;
    }

    Node* cur = head;
    while (cur->next &&
          (cur->next->freq < newNode->freq ||
          (cur->next->freq == newNode->freq && cur->next->data <= newNode->data))) {
            cur = cur->next;
    }

    newNode->next = cur->next;
    cur->next = newNode;
    return head;
}

Node* HuffmanTree(Node* head) {
    while (head && head->next) {
        Node* left = head;
        Node* right = head->next;
        head = right->next;

        Node* merged = new Node('$', left->freq + right->freq);
        merged->left = left;
        merged->right = right;

        head = insertSort(head, merged);
    }
    return head;
}

void printCodes(Node* root, char* code, int depth) {
    if (!root) return;

    if (!root->left && !root->right) {
        code[depth] = '\0';
        cout << root->data << " = " << code << endl;
        return;
    }

    code[depth] = '0';
    printCodes(root->left, code, depth + 1);

    code[depth] = '1';
    printCodes(root->right, code, depth + 1);
}

int main() {
    char chars[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i' };
    int freqs[]  = {  5 ,  9 , 12 , 13 , 16 ,  5 , 25 , 10 ,  5 };
    int n = sizeof(chars) / sizeof(chars[0]);

    Node* head = NULL;
    for (int i = 0; i < n; ++i) {
        Node* newNode = new Node(chars[i], freqs[i]);
        head = insertSort(head, newNode);
    }

    Node* root = HuffmanTree(head);

    char code[100];
    printCodes(root, code, 0);

    return 0;
}