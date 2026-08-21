class Solution{
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        bool x;
        int maxi=0;
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]>maxi)
            {
                maxi=candies[i];

            }
        }
            for(int j=0;j<candies.size();j++)
            {
                int result=candies[j]+extraCandies;
                if(result>=maxi)
                {
                    x=1;




                }
                else
                {
                    x=0;
                }
                ans[j]=x;

                

            }
         
        return ans;
        
    }
};