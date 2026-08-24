class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> first(n);
        vector<int> second(n);
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            first[i] = nums[i];
        }

        for(int j = n; j < nums.size(); j++)
        {
            second[j - n] = nums[j];
        }

        for(int i = 0; i < n; i++)
        {
            ans.push_back(first[i]);
            ans.push_back(second[i]);
        }

        return ans;
    }
};