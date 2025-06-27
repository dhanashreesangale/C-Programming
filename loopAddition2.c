#include<stdio.h>
int main()
{
    int i,sum,n;
    printf("enter the numbers:");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("the sum is %d",sum);
}