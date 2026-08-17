class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);

        int leftSum = 0;

        // Left sum store karna
        for(int i = 0; i < n; i++) {
            temp[i] = leftSum;
            leftSum = leftSum + nums[i];
        }

        // Total sum
        int total = 0;
        for(int i = 0; i < n; i++) {
            total = total + nums[i];
        }

        // Compare
        for(int i = 0; i < n; i++) {
            int rightSum = total - temp[i] - nums[i];

            if(temp[i] == rightSum) {
                return i;
            }
        }

        return -1;
    }
};