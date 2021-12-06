#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,res=0;
    while(scanf("%d",&n)!=EOF){
        res=0;
        if(n>10){
            res+=10*6;
            if(n>20){
                res+=2*10;
                if(n>40){
                    res+=1*20;
                }
                else{
                    res+=1*(n-20);
                }
            }
            else{
                res+=2*(n-10);
            }
        }
        else{
            res+=n*6;
        }
        printf("%d\n",res);
    }
    // system("pause");
    return 0;
}