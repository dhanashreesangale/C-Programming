#include<stdio.h>
#include<string.h>
int main()
{
    char num[100];
    printf("enter number:");
    scanf("%s",&num);
    strrev(num);
    printf("reversed number is %s",num);
    return 0;
}