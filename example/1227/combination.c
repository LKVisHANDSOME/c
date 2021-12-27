#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr, int n, int *solution, int now, int cnt)
{
    if (now == n) {
        for (int i = 0; i < cnt; i++) {
            printf("%d ", solution[i]);
        }
        printf("\n");
        return;
    }
    solution[cnt] = arr[now];
    backtracking(arr, n, solution, now + 1, cnt + 1);
    backtracking(arr, n, solution, now + 1, cnt);
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *solution = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    backtracking(arr, n, solution, 0, 0);
    system("pause");
    return 0;
}