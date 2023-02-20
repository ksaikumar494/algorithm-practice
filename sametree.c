#include<stdio.h>
#include<stdlib.h>
struct node
{
	int root;
	struct node* left;
	struct node* right;
};
struct node* newnode(int root)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->root=root;
	node->left=NULL;
	node->right=NULL;
	return(node);
}
int sametree(struct node* a,struct node* b)
{
	if(a==NULL && b==NULL)
	{
		return 1;
	}
	else if(a!=NULL && b!=NULL)
	{
		return(a->root==b->root && sametree(a->left,b->left) && sametree(a->right,b->right));
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a1,a2,a3,b1,b2,b3;
	printf("enter a1 value: \n");
	scanf("%d",&a1);
	printf("enter a2 value: \n");
	scanf("%d",&a2);
	printf("enter a3 value: \n");
	scanf("%d",&a3);
	printf("enter b1 value: \n");
	scanf("%d",&b1);
	printf("enter b2 value: \n");
	scanf("%d",&b2);
	printf("enter b3 value: \n");
	scanf("%d",&b3);
	printf("a1=%d,a2=%d,a3=%d,b1=%d,b2=%d,b3=%d:\n",a1,a2,a3,b1,b2,b3);
	struct node* a=newnode(a1);
	struct node* b=newnode(b1);
	a->left=newnode(a2);
	a->right=newnode(a3);
	b->left=newnode(b2);
	b->right=newnode(b3);
	if(sametree(a,b))
	{
		printf("both are same trees\n");
	}
	else
	{
		printf("both are not same\n");
	}
	return 0;
}
