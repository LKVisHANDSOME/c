#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int big[k];
    for (int i = 0; i < k; i++) {
        big[i] = -2147483648;
    }
    while (n--) {
        int num;
        scanf("%d", &num);
        printf("now is %3d's turn : ", num);
        for (int i = 0; i < k; i++) {
            if (num >= big[i]) {
                for (int j = k - 1; j > i; j--) {
                    big[j] = big[j - 1];
                }
                big[i] = num;
                break;
            }
        }
        for (int i = 0; i < k; i++) {
            printf("%11d ", big[i]);
        }
        printf("\n");
    }
    printf("%dth big number = %d\n", k, big[k - 1]);

    system("pause");
    return 0;
}