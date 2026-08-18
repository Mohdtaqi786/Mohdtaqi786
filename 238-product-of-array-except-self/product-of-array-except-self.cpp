class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp(n);
        int prefix=1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                prefix=1;
                temp[i]=prefix;
            }
            else
            {
                prefix=prefix*nums[i-1];
                temp[i]=prefix;
            }
        }
            int suffix=1;
            for(int j=n-1;j>=0;j--)
            {
                if(j==n-1)
                {
                     suffix = 1;
                temp[j] = suffix * temp[j];
                } 
                else
                {
                    suffix=suffix*nums[j+1];
                    temp[j]=suffix*temp[j];
                }
            }
            return temp;
    }
};