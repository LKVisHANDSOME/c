#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    if(1){
        int a=10;
        p=&a;
    }
    printf("%d\n",*p);
    system("pause");
    return 0;
}