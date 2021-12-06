#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int step[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &step[i]);
    }
    int can_go[n] = {1};
    for (int i = 0; i < n; i++) {
        if (can_go[n - 1]) {
            break;
        }
        else if (can_go[i]) {
            for (int j = i + 1; j <= i + step[i] && j < n; j++) {
                can_go[j] = 1;
            }
        }
        else {
            break;
        }
    }
    if (can_go[n - 1])
        printf("true\n");
    else
        printf("false\n");

    system("pause");
    return 0;
}