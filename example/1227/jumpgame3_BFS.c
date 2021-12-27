


bool canReach(int* arr, int n, int start){
    int visited[n],queue[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    queue[0]=start;
    int fr=0,rear=1;
    while(fr!=rear){
        int now = queue[fr++];
        if(arr[now]==0){
            return true;
        }
        visited[now]=1;
        int front=now-arr[now],back=now+arr[now];
        if(front>=0&&!visited[front]){
            queue[rear++] = front;
        }
        if(back<n&&!visited[back]){
            queue[rear++] = back;
        }
    }
    return false;
}