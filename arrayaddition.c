#include<stdio.h>
int main()
{
int a[5],sum;
printf("Enterthe values of array\n");
for(int i=0;i<=4;i++)
{
scanf("%d",&a[i]);
}

for(int j=0;j<=4;j++)
{
sum=sum+a[j];
}

printf("Additionof a,b,c=%d\n",sum);
return 0;
}
