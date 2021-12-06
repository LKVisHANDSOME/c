#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
        int temp, cnt = 0, len = 0,num[30];
        scanf("%d", &temp);
        while (temp)  num[len++] = temp % 10, temp /= 10;
        do {
            int reverse[30],the_same=1,carry=0;
            for (int i = 0; i < len; i++)               reverse[i] = num[len - i - 1];
            for (int i = 0; i < len && the_same; i++)   if (num[i] != reverse[i]) the_same = 0;
            if (cnt && the_same) break;
            for (int i = 0; i < len; i++) {
                num[i] = num[i] + reverse[i] + carry;
                if (num[i] >= 10)                       carry = 1, num[i] %= 10;
                else                                    carry = 0;
            }
            if (carry)                                  num[len++] = 1;
            cnt++;
        } while (1);
        printf("%d ", cnt);
        for (int i = len - 1; i >= 0; i--)              printf("%d", num[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}