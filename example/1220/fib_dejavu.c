#include <stdio.h>
#include <stdlib.h>

int fib(int n, int *record)
{
    if (record[n]) return record[n];
    if (n == 0 || n == 1) return 1;
    record[n] = fib(n - 1, record) + fib(n - 2, record);
    return record[n];
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 0 || n == 1) {
        printf("1\n");
        return 0;
    }
    int record[100] = {};
    record[0] = 1, record[1] = 1;
    printf("%d\n", fib(n, record));
    system("pause");
    return 0;
}