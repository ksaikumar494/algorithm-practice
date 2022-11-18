#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,sum=0,base=1;
 
 printf("enter a binary number: ");
 scanf("%d",&n);
 while(n>0)
 { 
  r=n%10;
  sum=sum+r*base;
  n=n/10;
  base=base*2;
 }
 printf("%d",sum);
 getch();
}
