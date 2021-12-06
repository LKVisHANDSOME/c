#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[26];
    for (int i = 0; i < 26; i++) {
        text[i] = 'a' + i;
    }
    printf("%s\n", text);

    system("pause");
    return 0;
}