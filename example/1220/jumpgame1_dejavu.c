
int visited[10001];
bool can(int *nums,int n,int now){
    if(now==n-1)    return true;
    visited[now]=1;
    for(int i=1;i<=nums[now];i++){
        if(!visited[now+i]&&can(nums,n,now+i))   return true;
    }
    return false;
}
bool canJump(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++) visited[i]=0;
    return can(nums,numsSize,0);
}