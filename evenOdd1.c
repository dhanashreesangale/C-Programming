#include<stdio.h>
int main()
{
    int n;
    printf("enter any number",&n);
    scanf("%d",n);
    (n%2==0)? printf("even number"):printf("odd number");
}