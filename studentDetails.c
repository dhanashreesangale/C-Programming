#include<stdio.h>
int main()
{
    int roll;
    char sub1[100],sub2[100],sub3[100],name[100];
    float m1,m2,m3,total ,avg;
    char grade;
    printf("enter student details \n");
    printf("Roll no: ");
    scanf("%d",&roll);
    printf("Name: ");
    scanf("%s",&name);
    printf("subject 1:");
    scanf("%s",&sub1);
    printf("subject 2:");
    scanf("%s",&sub2);
    printf("subject 3:");
    scanf("%s",&sub3);
    printf("marks 1  :");
    scanf("%f",&m1);
     printf("marks 2  :");
      scanf("%f",&m2);
      printf("marks 3  :");
       scanf("%f",&m3);
    total=m1+m2+m3;
    avg=total/3;
    if(avg<=100 && avg>=90)
            grade='O';
    else if(avg<90 && avg>=80)
            grade='A';
    else if(avg<80 && avg>=70)
            grade='B';
    else if(avg<70 && avg>=50)
            grade='C';
    else if(avg<50 && avg>=35)
            grade='D';
   else
            grade='F';
    printf("Roll No   :%d" ,roll);
    printf("Name   :%s" ,name);
    printf("Subject1    :%s" ,sub1);
    printf("Subject 2   :%s" ,sub2);
    printf("subject3   :%s" ,sub3);
    printf("\n marks 1:%f",m1);
    printf("\n marks 2:%f",m2);
    printf("\n marks 3:%f",m3);
    printf("\n total  :%f",total);
     printf("\n Avg  :%f",avg);
      printf("\n Grade  :%c",grade);

return 0;

}