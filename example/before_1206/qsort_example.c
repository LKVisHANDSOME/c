#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int ret = *(int*)(a)-*(int*)(b);
	if (ret>0) return 1;
	if (ret<0) return -1;
	return 0;
}

int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 1000;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    qsort(arr, 10, sizeof(int), cmp);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}