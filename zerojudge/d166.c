#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[150];
    int map[51];
    while (fgets(arr, 150, stdin) !=  NULL) {
        if (strcmp(arr, "-1\n") == 0) {
            break;
        }
        int num = 0, pointer = 0;
        for (int i = 0; arr[i] != '\n'; i++) {
            if (isdigit(arr[i])) {
                if (!num) {
                    num = 1;
                    map[pointer++] = atoi(arr + i);
                }
            }
            else {
                num = 0;
            }
        }
        int ans[pointer];
        for (int i = 0; i < pointer; i++) {
            ans[i] = -1;
        }
        for (int i = 0; i < pointer; i++) {
            int j = 0;
            for (; map[i]; j++) {
                map[i] -= (ans[j] == -1);
            }
            while (ans[j] != -1) {
                j++;
            }
            ans[j] = i + 1;
        }
        for (int i = 0; i < pointer; i++) {
            printf("%d ", ans[i]);
        }
        printf("\n");
    }
    // system("pause");
    return 0;
}