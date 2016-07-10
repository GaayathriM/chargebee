#include<stdio.h>
#include<conio.h>
void main()
{
int a,x,y,i,j=1;
clrscr();
printf("Enter the a value:");
scanf("%d",&a);
printf("Enter the pair:");
scanf("%d",&y);
for(i=0;i<2*a;i++)
{
x=2*a-i;
if(y!=x)
{
printf("The pair is%d for days %d is %d\n",y,j++,y);
}
}
getch();
}
