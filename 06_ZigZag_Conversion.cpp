class Solution {
public:
    string convert(string s, int numRows) {
        int l = s.length();
        if(numRows<=1 || numRows >= l)
        {
            return s;
        }
        int k = 0;
        int dir = -1;
        int j = 0;
        vector<string>v(numRows,"");
        for (k=0; k < l;k++)
        {
            if(j== 0)
            {
                dir = 1;
            }
            else if(j == numRows-1)
            {
                dir = -1;
            }
            v[j] = v[j]+s[k];
            j = j + dir;
        }
        string res;
        
        for( k = 0;k<numRows;k++)
        {
            res = res+v[k];
        }



        return res;
    }
    
};