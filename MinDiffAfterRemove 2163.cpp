#include<vector>
#include<queue>
#include<numeric>
#include<algorithm>
class Solution{
public:
    long long minimumDifference(std::vector<int>& nums){
        int n=nums.size()/3;
        std::vector<long long> minLeftSums(2*n+1);
        std::priority_queue<int> pq_left;
        long long currentLeftSum=0;
        for(int i=0;i<2*n;++i){
            pq_left.push(nums[i]);
            currentLeftSum+=nums[i];
            if(pq_left.size()>n){
                currentLeftSum-=pq_left.top();
                pq_left.pop();
            }
            if(pq_left.size()==n){
                minLeftSums[i+1]=currentLeftSum;
            }
        }
        std::vector<long long> maxRightSums(3*n);
        std::priority_queue<int,std::vector<int>,std::greater<int>> pq_right;
        long long currentRightSum=0;
        for(int i=3*n-1;i>=n;--i){
            pq_right.push(nums[i]);
            currentRightSum+=nums[i];
            if(pq_right.size()>n){
                currentRightSum-=pq_right.top();
                pq_right.pop();
            }
            if(pq_right.size()==n){
                maxRightSums[i]=currentRightSum;
            }
        }
        long long minDiff=LLONG_MAX;
        for(int k=n;k<=2*n;++k){
            long long currentDifference=minLeftSums[k]-maxRightSums[k];
            minDiff=std::min(minDiff,currentDifference);
        }
        return minDiff;
    }
};
  
