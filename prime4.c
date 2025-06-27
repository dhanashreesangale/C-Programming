#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,cnt=0,flag=1;
    printf("enter the number:");
    scanf("%d",&n);
    if(n%2==0 || n%3==0)
    flag=0;
    else
    {
        for(i=5;i<=sqrt(n);i+=6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    printf("prime");
    else
    printf("not prime");
}