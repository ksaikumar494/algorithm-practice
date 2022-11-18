#include<stdio.h>
#include<conio.h>
void main()
{
  int n,r,d=0,base=1;
  clrscr();
  printf("Enter the decimal number: ");
  scanf("%d",&n);
  while(n>0)
   {
     r=n%2;
     d=d+r*base;
     n=n/2;
     base=base*10;
   }
  printf("Binary number of a given Decimal number is %d",d);
  getch();
}
