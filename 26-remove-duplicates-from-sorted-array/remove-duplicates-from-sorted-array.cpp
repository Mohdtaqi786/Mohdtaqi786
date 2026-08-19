class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int k=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                nums[i+1]=nums[j];
                i++;
                k++;

            }


        }
        return k+1;
        
    }
};