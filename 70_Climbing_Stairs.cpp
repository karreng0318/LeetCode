class Solution {
public:
    int climbStairs(int n) {
        if( n <= 2)
        {
            return n;
        }
        vector <int> stair_path(n+1);
        stair_path[0] = 0;
        stair_path[1] = 1;
        stair_path[2] = 2;
        
        for(int j = 3; j<=n; j++)
        {
            stair_path[j] = stair_path[j-1] +  stair_path[j-2];
        }

        return  stair_path[n];       
    }
};