#include<stdio.h>
#include<stdlib.h>
void main()
{
	int array[10]={8,4,2,6,3,7,5,9,1,5},i,n=10,j,temp,sum;
	printf("enter sum value: ");
	scanf("%d",&sum);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			temp=array[i]+array[j];
			if(sum==temp)
			{
				printf("%d,%d\n",array[i],array[j]);
				break;
				return 0;
			}
		}
	}
}
