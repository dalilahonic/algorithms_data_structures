
// Binary Search Tree /  Binarno stablo pretrazivanja

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node {
    int key;
    struct node *left, *right;
};

struct node *newNode(int item) {
    struct node *temp = (struct node*)malloc(sizeof(struct node));

    temp -> key = item;
    temp -> left = temp -> right = NULL;
    return temp;
}

void inorder(struct node *root) {
    if(root != NULL) { 
        inorder(root -> left);
        printf("%d \n", root -> key);
        inorder(root -> right);
    }
}

struct node* insert(struct node* node, int key) {
    if(node == NULL) return newNode(key);

    if(key < node -> key) node -> left = insert(node -> left, key);
    else if (key > node -> key) node -> right = insert(node -> right, key);

    return node;
}

struct node* search(struct node* root, int key) {
    if(root == NULL || root -> key == key) return root;

    if(root -> key < key) return search(root -> right, key);

    return search(root -> left, key);
}

struct node* minValueNode(struct node* node) {
    struct node* current = node;

    while(current -> left != NULL) current = current -> left;

    return current;
}

struct node* deleteNode(struct node* root, int key) {
    if(root == NULL) return root;

    if(key < root -> key) root -> left = deleteNode(root -> left, key);
    else if (key > root -> key) root -> right = deleteNode(root -> right, key);
    else {
        if(root -> left == NULL) {
            struct node *temp = root -> right;
            free(root);
            return temp;
        } else if(root -> right == NULL) {
            struct node *temp = root -> left;
            free(root);
            return temp;
        }

        struct node* temp = minValueNode(root -> right);

        root -> key = temp -> key;

        root -> right = deleteNode(root -> right, temp -> key);
    }

    return root;
}

//....................................................

int maxValueNode(struct node *root) {
    struct node *current = root;

    while(current -> right != NULL) current = current -> right;

    return current -> key;
}

int max_depth(struct node *root) {
    if(root == NULL) return 0;
    else {
        int leftDepth = max_depth(root -> left);
        int rightDepth = max_depth(root -> right);

        return (leftDepth > rightDepth ? leftDepth : rightDepth) + 1;
    }
}

// bool isBalanced(struct node *root) {

//     if(root == NULL) return 0;
//         int leftDepth = max_depth(root -> left);
//         int rightDepth = max_depth(root -> right);

//         if ((leftDepth - rightDepth <= 1 || rightDepth - leftDepth <= 1) && isBalancd(root -> left) && isBalanced(root -> right)) {
//             return true;
//         } else {
//             return false;
//         }

// }

//  Implementiraj funkciju koja rekurzivno broji listove u binarnom stablu.
int countLeaves(struct node *root) {

    if(root == NULL) return 0;
    if(root -> left == NULL && root -> right == NULL) return 1;
    
    return countLeaves(root -> left) + countLeaves(root -> right);
}

int main() {
    struct node *root = NULL;
    root = insert(root, 32);
    insert(root, 34);
    insert(root, 46);
    insert(root, 2);

    inorder(root);

    // root = deleteNode(root, 46);
    // inorder(root);

    printf("Max value node je %d\n", maxValueNode(root));
    printf("Max depth: %d\n", max_depth(root));
    printf("Leaves: %d\n", countLeaves(root));

    return 0;
}