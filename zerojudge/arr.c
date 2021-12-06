#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int k;
    scanf("%d", &k);
    while (k--) {
        int target, find = 0;
        scanf("%d", &target);
        int l = 0, r = n;
        while (l < r) {
            int mid = (l + r) / 2;
            printf("l = %d  r = %d  mid = %d  arr[mid] = %d", l, r, mid, arr[mid]);
            if (arr[mid] > target) {
                printf(" > %d    r = %d", target, mid);
                r = mid;
            }
            else {
                printf(" <= %d    l = %d", target, mid);
                l = mid + 1;
            }
            printf("\n");
        }
        if (arr[l - 1] == target) {
            printf("%d is in the array\n", target);
        }
        else {
            printf("%d is not in the array\n", target);
        }
    }
    system("pause");
    return 0;
}