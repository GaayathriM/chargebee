#include<stdio.h>
int tow(int nn,char ssr,char ttt,char ddd)
{
if(nn==1){
printf("\nthe %ddisk moved from %c-->%c",nn,ssr,ddd);
return 0;}
tow(nn-1,ssr,ddd,ttt);
printf("\nthe %ddisk moved from %c-->%c",nn,ssr,ddd);
tow(nn-1,ttt,ssr,ddd);
}
int main()

{
int n;
char src='a',temp='b',dest='c';
printf("enter number of disk:");
scanf("%d",&n);
tow(n,src,temp,dest);
return 0;
}
