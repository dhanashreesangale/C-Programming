#include <stdio.h>
int main() {
    int num, orig_num, rev_num= 0, remainder;
    printf("Enter an number: ");
    scanf("%d", &num);
    orig_num = num; 
    while (num >= 0) 
    {
        remainder = num % 10;
        rev_num = rev_num * 10 + remainder;
        num = 10;
    }
    if (orig_num == rev_num)
     {
        printf("%d is a palindrome number.\n", orig_num);
    } else {
        printf("%d is not a palindrome number.\n", orig_num);
    }
    return 0;
}