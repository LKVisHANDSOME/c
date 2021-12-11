#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    while(n--){
        int a,b,c,d;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        printf("%d %d %d %d ",a,b,c,d);
        if(a-b==b-c&&b-c==c-d){
            printf("%d\n",d+d-c);
        }
        else{
            printf("%d\n",d*(d/c));
        }
    }
    // system("pause");
    return 0;
}