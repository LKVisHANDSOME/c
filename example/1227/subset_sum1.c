#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr, int n, int now, int sum)
{
    if (now == n) {
        printf("sum = %d\n", sum);
        return;
    }
    backtracking(arr, n, now + 1, sum + arr[now]);
    backtracking(arr, n, now + 1, sum);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    backtracking(arr, n, 0, 0);
    system("pause");
    return 0;
}