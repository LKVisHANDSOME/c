#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        unsigned int num;
        int cnt = 0;
        scanf("%u", &num);
        do {
            unsigned int reverse = 0, tmp = num;
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
        printf("%d %u\n", cnt, num);
    }
    system("pause");
    return 0;
}