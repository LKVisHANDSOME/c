
int can_go[10001];
bool can(int *nums,int n,int now){
    if(now==n-1)       return true;
    if(can_go[now]==1) return true;
    if(can_go[now]==0) return false;
    for(int i=1;i<=nums[now];i++){
        if(can(nums,n,now+i)){
            can_go[now+i]=1;
            return true;
        }
    }
    can_go[now]=0;
    return false;
}
bool canJump(int* nums, int numsSize){
    for(int i=0;i<numsSize;i++) can_go[i]=-1;
    return can(nums,numsSize,0);
}