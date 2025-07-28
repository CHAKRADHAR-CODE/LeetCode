void trav(int*nums,int numsSize,int ind,int curr,int*max,int*count){
    if(ind==numsSize){
        if(*max==curr){
            (*count)++;
        }
        else{
        if(*max<curr){
            *max=curr;
            *count=1;
        }
        }
        return;
    }
    trav(nums,numsSize,ind+1,curr,max,count);
    trav(nums,numsSize,ind+1,curr|nums[ind],max,count);
}
int countMaxOrSubsets(int* nums, int numsSize) {
    int count=0;
    int max = 0;
    trav(nums,numsSize,0,0,&max,&count);
    return count;
}
