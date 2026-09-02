class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>temp;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {

            if(val!=nums[i])
            {
                k++;
                temp.push_back(nums[i]);

            }
        }
        for(int i=0;i<k;i++)
        
        {
            nums[i]=temp[i];
        }
        return k;
    }
};