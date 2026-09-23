#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the choice:\n");
scanf("%d",&c);
printf("Enter the values of a and b:\n");
scanf("%d%d",&a,&b);
switch(c)
{
case 1:
printf("Addition of a and b:%d\n",a+b);
break;
case 2:
printf("Substraction of a and b:%d\n",a-b);
break;
case 3:
printf("Multiplication of a and b:%d\n",a*b);
break;
case 4:
printf("Division of a and b:%d\n",a/b);
break;
default:
printf("No choice found");
break;
}
return 0;
}
