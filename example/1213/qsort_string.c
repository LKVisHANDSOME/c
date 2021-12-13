#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}

int main()
{
    int n;
    scanf("%d", &n);
    char s[10][50];
    printf("not sort :\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", &s[i]);
    }
    qsort(s, n, sizeof(s[0]), cmp);
    printf("\nsorted :\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", s[i]);
    }

    system("pause");
    return 0;
}