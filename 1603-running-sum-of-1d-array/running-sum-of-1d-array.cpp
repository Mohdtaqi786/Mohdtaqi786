class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    int n=nums.size();
    vector<int>temp(n);
    for(int j=0;j<n;j++)
    {
        if(j==0)
        {
            temp[j]=nums[j];
        }
        else
        {
            temp[j]=nums[j]+temp[j-1];
        }
    }
    return temp;
    }
};