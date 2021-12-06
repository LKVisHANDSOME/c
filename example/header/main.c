#include <stdio.h>
#include <stdlib.h>

#include "my_math.h"

int main()
{
    int a = 3, b = 4;
    printf("%d,%d\n", max(a, b), min(a, b));
    system("pause");
    return 0;
}