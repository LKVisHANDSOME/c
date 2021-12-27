#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char name[100][100];
    int count = 0;
    while (scanf("%s", &name[count]))
    {
        if (name[count][strlen(name[count]) - 1] != '\"')
            break;
        count++;
    }

    name[count][strlen(name[count]) - 1] = '\0';
    for (int i = 0; i <= count; i++)
    {
        printf("%s\n", name[i]);
    }
    system("pause");
    return 0;
}