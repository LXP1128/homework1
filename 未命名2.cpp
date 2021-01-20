#include<stdio.h>
int main() 
{

int a[9];
int k,j;
for(k = 0;k < 10;k++)
{
  scanf("%d",&a[k]);
}
for(j=9;j>=0;j--)
printf("%d",a[j]);
return 0;
}
