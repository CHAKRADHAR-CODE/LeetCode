int maximumUniqueSubarray(int* nums, int numsSize) {
    int* hash = (int*)malloc(sizeof(int) * 100001);
    for (int i = 0; i < 100001; i++) {
        hash[i] = -1;
    }
    int j=0;
    int count = 0;
    int res= -1;
    int i=0;
    for(int j=0;j<numsSize;j++){
         if (hash[nums[j]] == -1) {
                count += nums[j];
                hash[nums[j]] = j;
            } else{
                count += nums[j];
                int a = hash[nums[j]];
                while(i<=a){
                    count-=nums[i];
                    hash[nums[i]] = -1;
                    i++;
                }
                hash[nums[j]] = j;
            }
            printf("%d\n",count);
            if(res<count){
                res=count;
            }
    }
    return res;
}
