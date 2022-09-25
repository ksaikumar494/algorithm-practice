#include<stdio.h>
#include<conio.h>
void main()
{
 int n,r,s=0,x;
 printf("enter any number: \n");
 scanf("%d",&n);
 clrscr();
 x=n;
 while(n>0)
 {
   r=n%10;
   s=r+(s*10);
   n=n/10;
 }
 if(x==s)
 {
   printf("given number is a palindrome\n");
 }
 else
  {
   printf("given number is not a palindrome\n");
  }
 getch();
 }
