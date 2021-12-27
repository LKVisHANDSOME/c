#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr,int *used,int n,int *solution,int now){
    if(now==n){
        for(int i=0;i<n;i++){
            printf("%d ",solution[i]);
        }
        printf("\n");
        return;
    }
    for(int i=0;i<n;i++){
        if(!used[i]){
            used[i]=1;
            solution[now]=arr[i];
            backtracking(arr,used,n,solution,now+1);
            used[i]=0;
        }
    }
    return;
}

int main()
{
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    int *used = (int *)malloc(sizeof(int) * n);
    int *solution = (int *)malloc(sizeof(int) *n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        used[i] = 0;
    }
    backtracking(arr,used,n,solution,0);
    system("pause");
    return 0;
}