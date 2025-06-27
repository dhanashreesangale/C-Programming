#include <stdio.h>
int main()
{
char ch;
printf("Enter character:");
scanf("%c", &ch);
printf("Previous character: %c\n", ch - 1);
printf("Next character: %c\n", ch + 1);
}
