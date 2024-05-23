#include<stdlib.h>
#include<stdio.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node* newNode(int data) {
struct node* node = (struct node*)malloc(sizeof(struct node));
node->data = data;

node->left = NULL;
node->right = NULL;
return(node);

}

// preorder traversal / KLD (koren, levo desno)
void print_preorder(struct node * tree) {
    if (tree) {
        printf("%d\n",tree->data);
        print_preorder(tree->left);
        print_preorder(tree->right);
    }

}

// inoreder traversal / LKD (levo, koren, desno)
void print_inorder(struct node * tree) {
    if (tree) {
        print_inorder(tree->left);
        printf("%d\n",tree->data);
        print_inorder(tree->right);
    }
}

// postoder traversal / LDK (levo, desno, koren)
void print_postorder(struct node * tree) {
    if (tree) {
        print_postorder(tree->left);
        print_postorder(tree->right);
        printf("%d\n",tree->data);
    }
}

void deltree(struct node * tree) {
    if (tree) {
        deltree(tree->left);
        deltree(tree->right);
        free(tree);
    }
}

int main() {
    struct node *root = newNode(1);

    root->left	 = newNode(2);
    root->right	 = newNode(3);

    root->left->left = newNode(4);

    printf("preorder\n");
    print_preorder(root);

    getchar();
    return 0;
}