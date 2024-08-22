class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n <= 1)
        {
            return n;
        }
        unordered_map<char,int> charMap;
        int l;
        l = 0;
        int max_size=0;
        for(int i=0;i<n;i++){
            if(charMap.count(s[i]) == 0 || charMap[s[i]] < l)
            {
                charMap[s[i]] = i;
                max_size = max(i - l + 1,max_size);
            }
            else{
                l = charMap[s[i]] + 1;
                charMap[s[i]] = i; 
            }               
        }
        return max_size;
    }
};