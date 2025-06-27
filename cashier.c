#include<stdio.h>
int main()
{
 int withdraw,a,b,c;
 printf("enter withdrow amount : \n");
 scanf("%d",&withdraw);
 a=withdraw/10;
 withdraw=withdraw%10;
 b=withdraw/5;
 withdraw=withdraw%5;
 c=withdraw;
 printf("note of 10 : %d\n",a);
 printf("note of  5 : %d\n",b);
 printf("note of  1 : %d\n",c);
}
 