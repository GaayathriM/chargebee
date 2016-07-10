#include <stdio.h>
 int main(void) {
int n,i,j=0,b1[100],a1[100];
printf("\n enter the value");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a1[i]);
for(i=0;i<n;i++)
{
int t=a1[i],c=0;
while(t)
{
int rem=t%2;
t=t/2;
c++;
}
b1[j++]=c;
 }
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b1[i]>b1[j])
{
int temp=b1[i];
b1[i]=b1[j];
b1[j]=temp;
temp=a1[i];
a1[i]=a1[j];
a1[j]=temp;
}
else if(b1[i]==b1[j])
{
if(a1[i]>a1[j])
{
int temp=b1[i];
b1[i]=b1[j];
b1[j]=temp;
temp=a1[i];
a1[i]=a1[j];
a1[j]=temp;
}	
}
}
}
printf("\n the order is");
for(i=0;i<n;i++)
printf("%d\t",a1[i]);
return 0;
}
