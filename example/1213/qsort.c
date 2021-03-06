#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int num1 = *(int *)a, num2 = *(int *)b;
    if (num1 > num2) return 1;
    if (num1 < num2) return -1;
    return 0;
}

int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 1000;
        printf("%d ", arr[i]);
    }
    printf("\n");

    qsort(arr, 20, sizeof(int), cmp);
    
    for (int i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}