class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int m=-1;
        int k;
        int i=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                m=i;
                k=i;
                break;
            }

        }
        if(m==-1)
        {
            return;
        }
        for(int j=m;j<nums.size();j++)
        {
            if(nums[k]==0&&nums[j]!=0)
            {
                swap(nums[k],nums[j]);
                k++;
            }

        }
        
    }
};