#include <stdbool.h>
#include <stdio.h>
#define ARRAY 1000000

int main()
{
    int a;
    int all[ARRAY], b[ARRAY];
    int n = 0;
    while (scanf("%d", &a) != EOF) b[n] = a,n++;        //輸入一個數列
    for (int x = 1; x <= 3; x++) {
        int A = 0, a1 = 0, a2 = 0, max = 0, sec = 0;
        for (int i = 0; i < n; i++) {
            if (b[i] == x) {
                all[A] = i;
                A++;
            }
        }  //把b[i]=x的項存到all[i]
        for (int i = 1; i < A; i++)
            if ((all[i] - all[i - 1]) > max) max = all[i] - all[i - 1];
        for (int i = 1; i < A; i++)
            if (all[i] - all[i - 1] < max && all[i] - all[i - 1] >= sec) {
                sec = all[i] - all[i - 1];
                a1 = all[i];
                a2 = all[i - 1];
            }
        //找出aa[1]（第二大距離）所對應的二項（最晚出現）
        printf("%d %d %d\n", sec, a2, a1);  //印出
    }
    return 0;
}