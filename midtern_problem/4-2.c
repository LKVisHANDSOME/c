#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int step[n], can_go = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &step[i]);
    }
    for (int i = 0; i < n; i++) {
        if (i <= can_go) {
            if (i + step[i] > can_go) {
                can_go = i + step[i];
            }
        }
        else {
            break;
        }
    }
    if (can_go >= n - 1) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    system("pause");
    return 0;
}