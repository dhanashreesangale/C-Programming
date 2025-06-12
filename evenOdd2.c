#include<stdio.h>
int main()
{
    int n;
    printf("enter any number");
    scanf("%d",n);
    printf("%s number",(n%2==0)?"even":"odd");
}