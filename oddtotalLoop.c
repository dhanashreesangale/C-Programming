//wap find all odd  number 1 to n//
//wap calculate  all even num 1 to n//
//wap calculate all  odd num 1 to n//


#include <stdio.h>
int main()
{
    int i, n;
    printf("enter how many odd numbers : ");
    scanf("%d", &n);
    printf("All odd numbers %d are: \n", n);
    for(i=1; i<=n; i++)
    {
        if(i%2!=0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}