#include <stdio.h>
#include <stdlib.h>

int main() {
    char c='a';
    printf("%d,%c\n",c,c);
    c+=1;
    printf("%d,%c\n",c,c);

    system("pause");
    return 0;
}