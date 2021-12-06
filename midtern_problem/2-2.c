#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        if (num) {
            printf("%d ", num);
            cnt++;
        }
    }
    for (int i = 0; i < n - cnt; i++) {
        printf("0 ");
    }
    printf("\n");
    system("pause");
    return 0;
}