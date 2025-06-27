#include<stdio.h>
int main()
{
    int i,n,cnt=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        cnt++;
    }
    if(cnt==0)
    printf("prime number");
    else
    printf("not prime");
    return 0;
}