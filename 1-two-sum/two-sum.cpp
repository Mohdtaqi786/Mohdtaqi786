class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int st=0;st<n;st++)
        {
            for(int end=n-1;end>st;end--)
            {
                if(nums[st]+nums[end]==target)
                {
                    return{st,end};
                }
            }
        }
        return{};
    }  
};