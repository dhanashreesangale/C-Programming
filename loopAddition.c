#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("enter the numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+i;

    }
    printf("Sum is %d",sum);
}