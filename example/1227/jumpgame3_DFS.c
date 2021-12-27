
int visited[50005];

bool DFS(int *arr,int n,int now){
    if(arr[now]==0){
        return true;
    }
    visited[now]=1;
    int front=now-arr[now],back=now+arr[now];
    if(front>=0&&!visited[front]){
        if(DFS(arr,n,front)){
            return true;
        }
    }
    if(back<n&&!visited[back]){
        if(DFS(arr,n,back)){
            return true;
        }
    }
    return false;
}

bool canReach(int* arr, int n, int start){
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    return DFS(arr,n,start);
}