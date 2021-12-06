#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    printf("a++ : \n");
    printf("%d\n", a++);
    printf("%d\n", a);

    a = 5;
    printf("== print(a) , a+=1 : \n");
    printf("%d\n", a);
    a += 1;
    printf("%d\n", a);

    a = 5;
    printf("++a : \n");
    printf("%d\n", ++a);
    printf("%d\n", a);

    a = 5;
    printf("== a+=1 , print(a) : \n");
    a += 1;
    printf("%d\n", a);
    printf("%d\n", a);

    system("pause");
    return 0;
}