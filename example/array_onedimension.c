#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    int id[n], grade[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &id[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &grade[i]);
        sum += grade[i];
    }
    for (int i = 0; i < n; i++) {
        printf("id = %3d    grade = %3d\n", id[i], grade[i]);
    }
    printf("average = %d\n", sum / n);

    system("pause");
    return 0;
}