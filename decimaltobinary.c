#include<stdio.h>
#include<conio.h>
void main()
{
 int B[50],n,i,j;
 clrscr();
 printf("enter the integer number: ");
 scanf("%d",&n);
 i=0;
 while(n>0)
 {
  B[i]=n%2;
  n=n/2;
  i++;
 }
 for(j=i-1;j>=0;j--)
 printf("%d",B[j]);
getch();
}
