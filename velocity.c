#include<stdio.h>
int main()
{
    float initialVelocity,FinalVelocity,time,Acceleration,Distance;
    printf("enter the initial velocity :");
    scanf("%f" ,&initialVelocity);
     printf("enter the Acceleration :");
    scanf("%f" ,&Acceleration);
     printf("enter the time :");
    scanf("%f" ,&time);

    FinalVelocity=initialVelocity+(Acceleration*time);

    Distance=initialVelocity+(Acceleration*time*time);

    printf("%.2f Final velocity \n",FinalVelocity);
    printf("%.2f Distance travelled \n",Distance);
    return 0;
}