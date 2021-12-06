#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (!m[i][j]) {
                if (i > 0) {
                    if (j > 0 && m[i - 1][j - 1] == -1) m[i][j]++;
                    if (m[i - 1][j] == -1) m[i][j]++;
                    if (j < 3 && m[i - 1][j + 1] == -1) m[i][j]++;
                }
                if (i < 3) {
                    if (j > 0 && m[i + 1][j - 1] == -1) m[i][j]++;
                    if (m[i + 1][j] == -1) m[i][j]++;
                    if (j < 3 && m[i + 1][j + 1] == -1) m[i][j]++;
                }
                if (j > 0 && m[i][j - 1] == -1) m[i][j]++;
                if (j < 3 && m[i][j + 1] == -1) m[i][j]++;
            }
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}