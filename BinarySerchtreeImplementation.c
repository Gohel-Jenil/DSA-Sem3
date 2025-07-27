#include <stdio.h>
#include <stdlib.h>

struct node{
    int info;
    struct node *left;
    struct node *right;
};

struct node* create(int info){
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->info = info;
    newNode->left = NULL;
    newNode->right = NULL;
}
struct node* insertNode(int info,struct node * root){
    int side=0;
    if(root==NULL){
        root = create(info);
        return root;
    }
    // printf("for left insert 0 and for right insert 1\n");
    // scanf("%d",&side);
    if(root->info > info){
        root->left=insertNode(info,root->left);
    }
    else{
        root->right=insertNode(info,root->right);
    }
}
void preorderTraversal(struct node* root) {
    if (root == NULL)
        return;

    printf("%d ", root->info);       
    preorderTraversal(root->left);          
    preorderTraversal(root->right);          
}

void main(){
    struct node* root=NULL;
    root=insertNode(40,root);
    // printf("NewNode");
    insertNode(20,root);
    // printf("NewNode");
    insertNode(25,root);
    // printf("NewNode");
    insertNode(45,root);
    // printf("NewNode");
    insertNode(60,root);
    // printf("NewNode");
    insertNode(50,root);
    preorderTraversal(root);
    // deleteNode(60,root);
}