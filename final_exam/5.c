#include <stdio.h>
#include <stdlib.h>

int count_ones(int num)
{
    int res = 0;
    while (num) {
        res += num & 1;
        num >>= 1;
    }
    return res;
}

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b)) {
        int total_ones_num = 0;
        if (a == 0 && b == 0) break;
        for (int i = a; i <= b; i++) {
            total_ones_num += count_ones(i);
        }
        printf("%d\n", total_ones_num);
    }
    system("pause");
    return 0;
}