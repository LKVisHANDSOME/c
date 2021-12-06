#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s1[20] = "6473", s2[20] = "123.456";
    int num1 = atoi(s1);
    float num2 = atof(s2);
    long long num3 = atoll(s1);
    printf("%d %f %lld\n", num1, num2, num3);
    system("pause");
    return 0;
}