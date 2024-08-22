class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int,int> fn_map;

              
        for(int i = 0; i< nums.size(); i++)
        {
            if(fn_map.find(nums[i]) != fn_map.end())
            {
                return {i,fn_map[nums[i]]};
            }
            fn_map[target - nums[i]] = i;
        }
        return {0};
    }
};