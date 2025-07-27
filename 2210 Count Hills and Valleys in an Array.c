int countHillValley(int* nums, int numsSize) {
    int cnt = 0;
    if (numsSize > 2) {
        for(int i = 1; i < numsSize - 1; i++) {
            if (nums[i] > nums[i - 1]) {
                while ((nums[i] == nums[i + 1]) && (i < numsSize - 2)) 
                    i++;
                if (nums[i] > nums[i + 1])
                    cnt++;            
            }
            else if (nums[i] < nums[i - 1]) {
                while ((nums[i] == nums[i + 1]) && (i < numsSize - 2)) 
                    i++;
                if (nums[i] < nums[i + 1])
                    cnt++;            
            }
        }
    }
    return cnt;
}
