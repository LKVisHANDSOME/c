#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, k, num;
    scanf("%d%d", &n, &k);
    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            if (nums[j] > nums[j - 1]) {
                int tmp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = tmp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("%d\n", nums[k - 1]);

    system("pause");
    return 0;
}