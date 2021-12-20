

int jump(int* nums, int numsSize){
    if(numsSize==1) return 0;
    int queue[numsSize],visited[numsSize],front=0,rear=1,step=0;
    for(int i=0;i<numsSize;i++) visited[i]=0;
    queue[0]=0;
    visited[0]=1;
    while(rear!=front){
        int n = rear - front;
        for(int i=0;i<n;i++){
            int now = queue[front++];
            for(int j=1;j<=nums[now]&&now+j<numsSize;j++){
                if(!visited[now+j]) visited[now+j]=1,queue[rear++]=now+j;
                if(now+j==numsSize-1)   return step+1;
            }
        }
        step++;
    }
    return -1;
}