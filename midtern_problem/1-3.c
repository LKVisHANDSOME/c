#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    while (n--) {
        int num;
        scanf("%d", &num);
        ans ^= num;
    }
    printf("%d\n", ans);
    system("pause");
    return 0;
}