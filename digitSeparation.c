#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("After separating digits:\n");
    while (n>0)
    {
        rem = n%10;
        printf("%d ",rem);
        n=n/10;
    }
    
}