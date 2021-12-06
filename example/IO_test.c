#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[10], c;
    gets(s);
    scanf("%c",&c);
    printf("%s , %c\n", s, c);
    system("pause");
    return 0;
}