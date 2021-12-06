#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("bool :         %u bytes\n", sizeof(bool));
    printf("char :         %u bytes\n", sizeof(char));
    printf("short :        %u bytes\n", sizeof(short));
    printf("int :          %u bytes\n", sizeof(int));
    printf("long :         %u bytes\n", sizeof(long));
    printf("long long :    %u bytes\n", sizeof(long long));
    printf("float :        %u bytes\n", sizeof(float));
    printf("double :       %u bytes\n", sizeof(double));
    printf("long double :  %u bytes\n", sizeof(long double));
    system("pause");
    return 0;
}