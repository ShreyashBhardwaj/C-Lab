#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the binary tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Inorder traversal
void inorderTraversal(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    inorderTraversal(node->left);
    printf("%d ", node->data);
    inorderTraversal(node->right);
}

// Preorder traversal
void preorderTraversal(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    printf("%d ", node->data);
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}

// Postorder traversal
void postorderTraversal(struct Node *node)
{
    if (node == NULL)
    {
        return;
    }
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    printf("%d ", node->data);
}

int main()
{
    // Create the root node
    struct Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");

    return 0;
}