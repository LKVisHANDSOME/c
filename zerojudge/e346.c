#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long nums[n + 1];
    nums[0] = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lld", &nums[i + 1]);
    }
    for (int i = 1; i <= n; i++) {
        nums[i] += nums[i - 1];
    }
    int q;
    scanf("%d", &q);
    while (q--) {
        int l, r;
        scanf("%d%d", &l, &r);
        printf("%lld\n", nums[r] - nums[l - 1]);
    }
    // system("pause");
    return 0;
}