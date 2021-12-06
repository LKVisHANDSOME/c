#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0\n");
        return 0;
    }
    int first=0;
    while(n>0){
        if(n%10==0&&first==0)
        {
            n/=10;
            continue;
        }
        first=1;
        printf("%d",n%10);
        n/=10;
    }
    printf("\n");
    // system("pause");
    return 0;
}