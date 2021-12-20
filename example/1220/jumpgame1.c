
bool can(int *nums,int n,int now){
    if(now==n-1)    return true;
    for(int i=1;i<=nums[now];i++){
        if(can(nums,n,now+i))   return true;
    }
    return false;
}
bool canJump(int* nums, int numsSize){
    return can(nums,numsSize,0);
}