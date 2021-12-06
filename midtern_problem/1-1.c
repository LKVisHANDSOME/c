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
    for (int i = 0; i < n; i++) {
        int is_ans = 1;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (arr[i] == arr[j]) {
                is_ans = 0;
                break;
            }
        }
        if (is_ans) {
            printf("%d\n", arr[i]);
            break;
        }
    }
    system("pause");
    return 0;
}