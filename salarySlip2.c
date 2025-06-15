#include<stdio.h>
int main()
{
    int id;
    char name[100];
    float bs,da,hra,tax,ts,inhand;
    printf("enter employee details \n" );
    printf("id  :");
    scanf("%d",& id);
     printf("enter your name ");
    scanf("%s" ,&name);
    printf("enter basic salary ");
    scanf("%f" ,& bs);
    printf(" \n enter daily allownace (%%) ");
    scanf("%f" ,& da);
    printf("entre hra (%%)");
    scanf("%f",&hra);
    
    if(bs>=200000)
    tax=20;
    else if(bs>=150000)
    tax=15;
    else if(bs>=80000)
    tax=10;
    else if(bs>000)
    tax=5;
    else 
    tax=0;

    ts=bs+((bs*(da+hra-tax)/100));
    inhand=ts;
     
    printf("\n enter id :" ,id);
    printf("\n enter name :",name);
    printf("\n basic salary :%f",bs);
    printf("\n daily allowance :%f",da);
    printf("\n enter hra :%f",hra);
    printf("\n tax(%%) :%f",tax);
    printf("\n inhand :\n" ,inhand);
    return 0;
}