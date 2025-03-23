class Solution {
public:
    vector<long long> findMaxSum(vector<int>& nums1, vector<int>& nums2, int k) {

        vector<std::pair<int,int>> sortnum1;
        int n = nums1.size();
        vector<long long> ans(n,0);
        long long heap_sum = 0;

        for (int i = 0; i < n; i++)
        {
            sortnum1.push_back(std::make_pair(nums1[i],i)) ;
        }
        sort(sortnum1.begin(),sortnum1.end());
        std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;
        
        for(int i = 0; i < n; i++)
        {
            int j = sortnum1[i].second;
            if( (i > 0) && (sortnum1[i].first == sortnum1[i-1].first))
            {
                ans[j] = ans[sortnum1[i-1].second];

            }
            else
            {
                ans[j] = heap_sum;
            }
     
            minHeap.push(nums2[j]);
            heap_sum = heap_sum+nums2[j];
            if(minHeap.size() > k)
            {
                heap_sum = heap_sum - minHeap.top();
                minHeap.pop();
            }
        }


        return ans;
    }
};