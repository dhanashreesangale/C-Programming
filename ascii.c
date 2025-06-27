  #include<stdio.h>
int main()
{
    char ch;
    printf("Enter anything");
    scanf("%c",& ch);
    if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
    printf("Alphabet");
    else if (ch>=48 && ch<=57)
    printf("digit");
    else 
    printf("special symbol");
    return 0;

   #include<stdio.h>
    
}