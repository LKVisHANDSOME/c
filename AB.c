#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10] = {}, num;
    for (int i = 0; i < 4; i++) {
        scanf("%1d", &num);
        arr[num] = i + 1;
    }
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%1d", &num);
        if (arr[num] == i + 1) {
            cnt1++;
        }
        else {
            cnt2 += (arr[num] != 0);
        }
    }
    printf("%dA%dB\n", cnt1, cnt2);

    // system("pause");
    return 0;
}