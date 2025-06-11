#include<stdio.h>
int main()
{
float ts,bs,da,hra,tax;
int eid;
char ename[100];
FILE *fp;
fp = fopen("salaryslip.txt","w");
printf("enter employee details :");
printf("\nId : ");
scanf("%d",&eid);
scanf("%s", &ename);
printf("enter basic salary:");
scanf("%f",&bs);

printf("enter daily allowance salary (%%):");
scanf("%f",&da);

printf("enter house rent allowance (%%):");
scanf("%f",&hra);

printf("enter tax (%%):");
scanf("%f",&tax);

ts=bs+((bs*(da+hra-tax))/100);

fprintf(fp,"\n--------employee salary slip----------");
fprintf(fp,"\n\t\tID           :%d",eid);
fprintf(fp,"\n\t\tname         %s",ename);
fprintf(fp,"\n\t\tBasic salary  %.2f",bs);
fprintf(fp,"\n\t\tda  (%%)       %.2f",da);
fprintf(fp,"\n\t\thra (%%)         %2.f",hra);
fprintf(fp,"\n\t\ttax(%%)         %2.f",tax);
fprintf(fp,"\n\t\tts          %2.f",ts);

return 0;



}
    