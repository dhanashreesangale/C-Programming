#include <stdio.h> 
int main()
 {
    int a, b, temp;  


    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    
    temp = a;
    a = b;
    b = temp;

    
    printf("After swapping:  %d,%d", a, b);
    return 0; 
}