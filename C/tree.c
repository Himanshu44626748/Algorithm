#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};
struct node *newnode(int data)
{
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return (node);
}

int main()
{
    struct node *root = newnode(6);
    root->right = newnode(8);
    root->left = newnode(4);
    root->left->left = newnode(2);
    root->left->right = newnode(5);
    root->right->left = newnode(7);
    root->right->right = newnode(9);
}