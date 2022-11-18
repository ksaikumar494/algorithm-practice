#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void show();
int stack[5],top=-1;
void main()
{
	int choice;
	printf("1. push\n");
	printf("2. pop\n");
	printf("3. show\n");
	printf("4. exit\n");
	while(1)
	{
		printf("enter choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:show();
			       break;
			case 4:exit(0);
			       break;
			default:printf("invalid choice");
		}
	}
	
}
void push()
{
	int item;
	if(top==5-1)
	{
		printf("stack is full");
	}
	else
	{
		printf("push element in stack: ");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		printf("popped %d",stack[top]);
		top=top-1;
	}
}
void show()
{
	int i;
	if(top>=0)
	{
		printf("stack elements: \n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
	else
	{
		printf("stack is empty");
	}
}
