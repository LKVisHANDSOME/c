#include <stdio.h>
#include <stdlib.h>

void add(int b){
    b++;
    return;
}

int main()
{
    int a=3;
    printf("%d\n",a);
    add(a);
    printf("%d\n",a);
    system("pause");
    return 0;
}