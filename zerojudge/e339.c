#include <stdio.h>
// #include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    for (int i = 1; i < n; i++) {
        arr[i] += arr[i - 1];
    }
    for(int i=0;i<n;i++){
        printf("%lld ",arr[i]);
    }
    printf("\n");
    // system("pause");
    return 0;
}