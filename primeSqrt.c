#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,cnt=0,flag=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    printf("prime number");
    else
    printf("not prime");
    return 0;
}