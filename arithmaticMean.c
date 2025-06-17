#include<stdio.h>
int main()
{

   int a,b;
   float AM, HM; 
   
   
   printf("Enter the 1st number:\n ");
   scanf("%d",&a);
   printf("Enter the 2nd number:\n ");
   scanf("%d",&b);
  
   AM=(a+b)/2; 
   HM=a*b/(a+b); 
   
   printf("Arithmetic Mean is: %f",AM);
   printf("\nHarmonic Mean is: %f",HM);
   
   getchar();
}
