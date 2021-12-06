#include <stdio.h>
#include <stdlib.h>

void print_arr(int **arr, int n, int m)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 3, m = 5;
    int arr[n][m];
    int *p[n];
    for (int i = 0; i < n; i++) {
        p = arr[i];
    }
    print_arr(p, n, m);
    system("pause");
    return 0;
}