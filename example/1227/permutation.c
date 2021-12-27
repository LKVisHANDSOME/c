#include <stdio.h>
#include <stdlib.h>

void backtracking(int *arr,int n,int now,int *solution,int *used){
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
            solution[now] = arr[i];
            backtracking(arr,n,now+1,solution,used);
            used[i]=0;
        }
    }
    return;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],solution[n],used[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        used[i]=0;
    }
    backtracking(arr,n,0,solution,used);
    system("pause");
    return 0;
}