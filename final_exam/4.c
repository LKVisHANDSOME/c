#include <stdio.h>
#include <stdlib.h>

typedef struct contestant{
    int number;
    int combination;
    int weight;
    int array[2];
}Contestant;

void Run(struct contestant *r, int n){
    if(n < 0) return;
    if(n == 0){
        r->combination++;
        return;
    }
    Run(r,n-r->array[0]);
    Run(r,n-r->array[1]);
}

int main(){
    int n;
    scanf("%d",&n);
    Contestant v[n];
    float mx=0;
    int mxi;
    for(int i=0;i<n;i++){
        v[i].combination=0;
        scanf("%d%d%d%d",&v[i].number,&v[i].weight,&v[i].array[0],&v[i].array[1]);
        Run(&v[i],20);
        if(v[i].combination+(float)(v[i].weight)*1.5>mx){
            mx=v[i].combination+(float)(v[i].weight)*1.5;
            mxi=i;
        }
    }
    printf("%d\n%.2f\n",v[mxi].number,mx);
    system("pause");
    return 0;
}