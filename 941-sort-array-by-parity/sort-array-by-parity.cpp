class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int evenIndex=-1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                evenIndex=i;
                break;

            }
        }
        if(evenIndex==-1)
        {
            return nums;
        }
        int k=0;
        for(int i=evenIndex;i<nums.size();i++)
        {
            if(nums[i]%2==0&&nums[k]%2!=0)
            {
                swap(nums[k],nums[i]);
                k++;
            }
            else
            {
                if(nums[k]%2==0)
                {
                    k++;
                }
            }

        }
        return nums;
        
    }
};