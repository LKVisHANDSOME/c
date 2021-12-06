#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        long long num;
        int cnt = 0;
        scanf("%lld", &num);
        do {
            printf("%d %lld\n",cnt,num);
            long long reverse = 0, tmp = num;
            while (tmp) {
                reverse *= 10;
                reverse += tmp % 10;
                tmp /= 10;
            }
            if (cnt && num == reverse) {
                break;
            }
            num += reverse;
            cnt++;
        } while (1);
        printf("%d %lld\n", cnt, num);
    }
    system("pause");
    return 0;
}