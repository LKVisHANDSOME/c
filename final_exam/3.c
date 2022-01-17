#include <stdio.h>
#include <stdlib.h>

int gcd(int n,int m){
    int b,s;
    if(n>m)     b=n,s=m;
    else        s=n,b=m;
    if(s==0)    return b;
    return      gcd(s,b%s);
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%d\n",gcd(n,m));
    system("pause");
}