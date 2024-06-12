#include<stdlib.h>
#include<stdio.h>
#include <stdbool.h>
#include <limits.h>

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


//.........................................................

// Napisati rekurzivnu funkciju u C-u kojom se ispisuje sadržaj informacionih polja u listovima binarnog stabla.
void print_leaves(struct node *tree) {

    if(tree == NULL) return;

    if(tree -> left) {
        print_leaves(tree -> left);
    } 

    if(tree -> right) {
        print_leaves(tree -> right);
    } 

    if(tree -> left == NULL && tree -> right == NULL) {
        printf("%d\n", tree -> data);
    }

}

// Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata nepraznog binarnog stabla
int sum_tree(struct node *tree) {

    if(tree == NULL) return 0;
    
    return tree -> data + sum_tree(tree -> left) + sum_tree(tree -> right);
}

// Napisati rekurzivnu funkciju kojom se izračunava broj elemenata nepraznog binarnog stabla.
int count_elements(struct node *tree) {
    if(tree) {
        return 1 + count_elements(tree -> right) + count_elements(tree -> left);
    }
}

// Napisati rekurzivnu funkciju kojom se ispituje da li se element E nalazi u binarnom stablu.
bool is_element_in_tree(struct node *tree, int E) {

    if(tree == NULL) return false;

    if(tree -> data == E) return true;

    return is_element_in_tree(tree -> left, E) || is_element_in_tree(tree -> right, E);
}

// Napisati rekurzivnu funkciju kojom se izračunarava maksimalna dubina stabla.
int max_depth(struct node *tree) {
    if (tree == NULL) {
        return 0;
    }

    int left_depth = max_depth(tree -> left);
    int right_depth = max_depth(tree -> right);
    return 1 + (left_depth > right_depth ? left_depth : right_depth);
}

// Napisati rekurzivnu funkciju kojom se izračunarava broj elemenata na n-tom nivou stabla, pri čemu se koren stabla tretira kao nulti nivo.
int count_elements_at_level(struct node *tree, int level, int current_level) {
    if (tree == NULL) {
        return 0;
    }

    if (current_level == level) {
        return 1;
    }

    return count_elements_at_level(tree -> left, level, current_level + 1) + count_elements_at_level(tree -> right, level, current_level + 1);
}

// Napisati rekurzivnu funkciju kojom se ispisuju elemenati na n-tom nivou stabla, pri čemu se koren stabla tretira kao nulti nivo.
void print_elements_at_level(struct node *tree, int level, int current_level) {
    if (tree == NULL) {
        return;
    }

    if (current_level == level) {
        printf("%d\n", tree -> data);
        return;
    }

    print_elements_at_level(tree -> left, level, current_level + 1);
    print_elements_at_level(tree -> right, level, current_level + 1);
}

// Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata na n-tom nivou stabla, pri čemu se koren stabla tretira kao nulti nivo.
int sum_elements_at_level(struct node *tree, int level, int current_level) {
    if (tree == NULL) {
        return 0;
    }

    if (current_level == level) {
        return tree -> data;
    }

    return sum_elements_at_level(tree -> left, level, current_level + 1) + sum_elements_at_level(tree -> right, level, current_level + 1);
}

// Napisati rekurzivnu funkciju kojom se izračunava zbir elemenata u listovima binarnog stabla.
int sum_leaf_elements(struct node *tree) {
    if (tree == NULL) {
        return 0;
    }

    if (tree -> left == NULL && tree -> right == NULL) {
        return tree -> data;
    }

    return sum_leaf_elements(tree -> left) + sum_leaf_elements(tree -> right);
}

// Napisati rekurzivnu funkciju kojom se izračunava maksimalni element binarnog stabla.
int max_element(struct node *tree) {
    if (tree == NULL) return 0;

    int max_left = max_element(tree -> left);
    int max_right = max_element(tree -> right);
    int max = tree -> data;
    
    if (max_left > max) {
        max = max_left;
    }

    if (max_right > max) {
        max = max_right;
    }
    
    return max;
}

// Napisati rekruzivnu funkciju koja pronalazi najmanji element u binarnom stablu.
int min_element(struct node *root) {

    if(root == NULL) return INT_MAX;

    int min_left = min_element(root -> left);
    int min_right = min_element(root -> right);
    int min = root -> data;
 
    if (min_left < min) {
        min = min_left;
    }

    if (min_right < min) {
        min = min_right;
    }
    
    return min;
}

int main() {
    struct node *root = newNode(1);

    root->left	 = newNode(2);
    root->right	 = newNode(3);

    root->left->left = newNode(4);

    printf("preorder\n");
    print_preorder(root);

    printf("Leaves: \n");
    print_leaves(root);

    printf("Sum: %d \n", sum_tree(root));
    printf("Broj elemenata: %d\n", count_elements(root));

    if(is_element_in_tree(root, 2)) {
        printf("Element %d is in the tree.\n", 2);
    } else {
        printf("Element %d is not in the tree.\n", 2);
    }

    printf("%d\n", sum_elements_at_level(root, 1, 0));
    printf("%d\n", min_element(root));
    
    return 0;
}