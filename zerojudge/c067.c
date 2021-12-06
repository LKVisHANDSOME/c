#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, cnt = 1;
    while (scanf("%d", &n), n) {
        int nums[n], sum = 0, res = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &nums[i]);
            sum += nums[i];
        }
        sum /= n;
        for (int i = 0; i < n; i++) {
            res += abs(sum - nums[i]);
        }
        printf("Set #%d\n", cnt++);
        printf("The minimum number of moves is %d.\n", res / 2);
    }

    system("pause");
    return 0;
}