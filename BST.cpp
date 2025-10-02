#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct BST{
    int data;
    BST * left;
    BST * right;
};
  

BST * insert_Node(BST * root, int value)
{
    if(root == NULL)
    {
        BST * temp = (BST*) malloc(sizeof(BST));
        temp->data = value;
        temp->left = NULL;
        temp->right = NULL;
        return temp;
    }
    if (value <= root->data)
        root->left  = insert_Node(root->left, value);
    else if (value > root->data)
        root->right = insert_Node(root->right, value);

    return root;
}

BST * minimum_Node(BST * root)
{
    while(root->left != NULL)
        root = root->left;

    return root;
}


BST * delete_Node(BST * root, int key)
{
    if(root == NULL)
        return root;
    else if(key < root->data)
        root->left = delete_Node(root->left, key);
    else if(key > root->data)
        root->right = delete_Node(root->right, key);
    else
    {
        BST * temp = (BST*) malloc(sizeof(BST));

        // no child
        if((root->left == NULL) && (root->right == NULL))
        {
            free(root);
            root = NULL;
        }

        // 1 child (right)
        else if(root->left == NULL)
        {
            temp = root;
            root = root->right;
            free(temp);
        }
        // 1 child (left)
        else if(root->right == NULL)
        {
            temp = root;
            root = root->left;
            free(temp);
        }
        // 2 children
        else
        {
            temp = minimum_Node(root->right);
            root->data = temp->data;
            root->right = delete_Node(root->right, temp->data);
        }
    }
    return root;
}

void inorder(BST * root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}



void preorder(BST * root)
{
    if(root == NULL)
    return;

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}


void postorder(BST * root)
{
    if(root == NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}


bool search_key(BST * root, int key)
{
    while(root!=NULL)
    {
        if(root->data == key)
            return true;
        if(key > root->data)
            root = root->right;
        else if(key < root->data)
            root = root->left;
    }
    return false;
}



int main()
{
    BST * root = (BST*) malloc(sizeof(BST));
    root = NULL;

    root = insert_Node(root, 50);
    root = insert_Node(root, 70);
    root = insert_Node(root, 60);
    root = insert_Node(root, 20);
    root = insert_Node(root, 90);
    root = insert_Node(root, 10);
    root = insert_Node(root, 40);
    root = insert_Node(root, 100);
    root = insert_Node(root, 30);


    cout<<"Preorder Traversal"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"Postorder Traversal"<<endl;
    postorder(root);
    cout<<endl;


    cout<<"Inorder Traversal"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"deleting 30"<<endl;
    root = delete_Node(root, 30);
    preorder(root);
cout<<endl;
    postorder(root);
cout<<endl;
    inorder(root);
    cout<<endl;
    cout<<"deleting 50"<<endl;
    root = delete_Node(root, 50);
    preorder(root);
cout<<endl;
    postorder(root);
cout<<endl;
    inorder(root);
    cout<<endl;
    /*
    cout<<"deleting 90"<<endl;
    root = delete_Node(root, 90);
    inorder(root);
    cout<<endl;

    cout<<"deleting 20"<<endl;
    root = delete_Node(root, 20);
    inorder(root);
    cout<<endl;
*/
    return 0;
}
