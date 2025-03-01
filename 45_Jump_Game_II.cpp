class Solution {
public:
     int jump(vector<int>& nums) {
        int last = 0;
        int left = 0, right = 0;
        int jumps = 0;
        while(last < nums.size()-1) {
            jumps++;
            for(int i=left;i<=right;i++) {
                last = max(last, i+nums[i]);
            }
            left = right+1;
            right = last;
        }
        return jumps;
    }
};


class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),9999);
        int n = nums.size();
        dp[0] = 0;
        for(int i = 0; i<n;i++)
        {
            for (int j = 1; j <= nums[i]; j++)
            {
                if(i+j < n)
                {
                    dp[i+j] = min(dp[i+j],dp[i] + 1);
                }
                
            }
        }
        return dp[n - 1];
    }
};