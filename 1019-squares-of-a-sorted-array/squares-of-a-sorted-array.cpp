class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>temp(nums.size());
        int left=0;
        int n=nums.size();
        int right=n-1;
        for(int i=n-1;i>=0;i--)
        {
            int leftSquare=nums[left]*nums[left];
            int rightSquare=nums[right]*nums[right];
            if(leftSquare>rightSquare)
            {
                temp[i]=leftSquare;
                left++;
            }
            else
            {
                temp[i]=rightSquare;
                right--;
            }
        }
        return temp;




    }
};