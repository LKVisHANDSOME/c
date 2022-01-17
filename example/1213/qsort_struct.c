#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct country{
    char name[75];
    int cnt;
}Country;

int cmp(const void *a, const void *b)
{
    return strcmp(((Country *)a)->name, ((Country *)b)->name);
}

int main()
{
    int n;
    scanf("%d", &n);
    Country country[n];
    printf("not sort :\n");
    for (int i = 0; i < n; i++) {
        scanf("%s%d", &country[i].name,&country[i].cnt);
    }
    qsort(country, n, sizeof(country[0]), cmp);
    printf("\nsorted :\n");
    for (int i = 0; i < n; i++) {
        printf("%s %d\n", country[i].name,country[i].cnt);
    }

    system("pause");
    return 0;
}
