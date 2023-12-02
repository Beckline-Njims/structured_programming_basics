#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
enum Traversal {Preorder_Traversal, Inorder_Traversal, Postorder_Traversal};
typedef enum Traversal trav;
typedef struct Node Node;
struct Node {
    int x;
    Node* left_node, *right_node;
};
Node* create_tree(int data) {                            //creating tree
    Node* root = (Node*) malloc (sizeof(Node));
    root->left_node= root->right_node = NULL;
    root->x = data;
    return root;
}
Node* create_node(int data) {                          //creating node
    Node* node = (Node*) malloc (sizeof(Node));
    node->x = data;
    node->left_node = node->right_node = NULL;
    return node;
}
void release_tree(Node* root) {                        //releasing tree
    if (!root){
        return;
    }
    release_tree(root->left_node);
    release_tree(root->right_node);
    if (!root->left_node && !root->right_node) {
        free(root);
    }
}
 void displaytree(Traversal trav, Node* root) {
    if (!root){
        return;
		}
    switch(trav) {
        case Preorder_Traversal:      //preorder traversal
            printf("%d -> ", root->x);
            displaytree(trav, root->left_node);
            displaytree(trav, root->right_node);
            break;
        case (Inorder_Traversal):      //inorder traversal
            displaytree(trav, root->left_node);
            printf("%d -> ", root->x);
            displaytree(trav, root->right_node);
            break;
        case (Postorder_Traversal):   // preorder traversal
            displaytree(trav, root->left_node);
            displaytree(trav, root->right_node);
            printf("%d -> ", root->x);
            break;
    }
}
int main() {
    Node* root = create_tree(20);    
    root->left_node = create_node(5);
    root->right_node = create_node(15);
    root->left_node->left_node = create_node(20);
	root->left_node->right_node = create_node(25);
    root->right_node->left_node = create_node(40);
    root->right_node->right_node = create_node(45);
    printf("Preorder Traversing\n");
    displaytree(Preorder_Traversal, root);
    printf("\n\n");
    printf("Inorder Traversing\n");
    displaytree(Inorder_Traversal, root);
    printf("\n\n");
    printf("Postorder Traversing\n");
    displaytree(Postorder_Traversal, root);
    release_tree(root);
    return 0;
}

