#include<stdio.h>
int main()
{
    char ch;
    printf("enter the alphabet:");
    scanf("%c",&ch);
    ch = tolower(ch);
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("vovel");
        break;
        default:
        printf("not vovel");

    }
}