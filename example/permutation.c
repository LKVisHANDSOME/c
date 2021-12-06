#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr, int *num, int now)
{
    if (now == 3) {
        printf("%d^%d^%d=%d\n", num[0], num[1], num[2], num[0] ^ num[1] ^ num[2]);
    }
    for (int i = 0; i < 3; i++) {
        if (arr[i] != -1) {
            num[now] = arr[i];
            arr[i] = -1;
            backtracking(arr, num, now + 1);
            arr[i] = num[now];
            continue;
        }
    }
    return;
}

int main()
{
    int arr[3] = {1, 3, 5}, num[3] = {};
    backtracking(arr, num, 0);
    system("pause");
    return 0;
}