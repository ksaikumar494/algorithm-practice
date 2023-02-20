#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* left;
	struct node* right;
};
struct node* newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
int preorder(struct node* node)
{
	if(node==NULL)
	return;
	printf("%d",node->data);
	preorder(node->left);
	preorder(node->right);
}
int printinorder(struct node* node)
{
	if(node==NULL)
	return;
	printinorder(node->left);
    printf("%d",node->data);
	printinorder(node->right);
}
int postorder(struct node* node)
{
	if(node==NULL)
	return;
	postorder(node->left);
	postorder(node->right);
	printf("%d",node->data);
}
int main()
{
	struct node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
	printf("preorder of tree is: \n");
	preorder(root);
	printf("\n");
	printf("inorder of binary tree is \n");
	printinorder(root);
	printf("\n");
	printf("postorder of tree is: \n");
	postorder(root);
	return 0;
}
