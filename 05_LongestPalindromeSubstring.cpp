class Solution {
public:
    string longestPalindrome(string s) {
        string result = "";
        int reslen = 0;
        for (int i = 0; i< s.length(); i++)
        {
            int l = i;
            int r = i;
            while( l>=0  && r < s.length() && s[l] == s[r])
            {
                if((r - l + 1) > reslen)
                {
                    reslen = r-l+1;
                    result = s.substr(l, reslen);
                }
                r++;
                l--;
            }
            l = i;
            r = i+1;
            while( l>=0  && r < s.length() && s[l] == s[r])
            {
                if((r - l + 1) > reslen)
                {
                    reslen = r-l+1;
                    result = s.substr(l, reslen);
                }
                r++;
                l--;
            }
        }
        return result;

    }
};