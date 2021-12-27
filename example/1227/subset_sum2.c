#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr, int n, int now, int sum, int k, int *res, int *cnt)
{
    if (now == n) {
        if (sum == k) {
            (*res)++;
        }
        (*cnt)++;
        return;
    }
    backtracking(arr, n, now + 1, sum + arr[now], k, res, cnt);
    backtracking(arr, n, now + 1, sum, k, res, cnt);
    return;
}

int main()
{
    int n, res = 0, cnt = 0;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    backtracking(arr, n, 0, 0, 30, &res, &cnt);
    printf("res = %d,cnt = %d\n", res, cnt);
    system("pause");
    return 0;
}