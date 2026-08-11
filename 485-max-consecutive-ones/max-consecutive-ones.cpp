class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int n = nums.size();
        int maxone = 0;
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(nums[j]==1)
            {
                count++;
            }
            else
            {
                count=0;
            }
            maxone=max(maxone,count);
        }
        return maxone;
    }
};