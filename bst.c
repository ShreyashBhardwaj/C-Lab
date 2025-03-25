#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the BST
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

// Function to insert a node in the BST
struct Node *insert(struct Node *node, int data)
{
    if (node == NULL)
    {
        return createNode(data);
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

// Function to search a given key in a given BST
struct Node *search(struct Node *root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == NULL || root->data == key)
    {
        return root;
    }
    // Key is greater than root's key
    if (root->data < key)
    {
        return search(root->right, key);
    }
    // Key is smaller than root's key
    return search(root->left, key);
}

// Function to print the tree in-order (for testing purposes)
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main()
{
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of the given tree: ");
    inorder(root);

    int key = 40;
    struct Node *result = search(root, key);
    if (result != NULL)
    {
        printf("\nElement %d found in the tree.\n", key);
    }
    else
    {
        printf("\nElement %d not found in the tree.\n", key);
    }

    return 0;
}