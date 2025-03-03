class Solution {
public:
    vector<string> letterCombinations(string digits) {
        std::unordered_map<char,std::vector<string>> map;
        map['2'] = {"a","b","c"};
        map['3'] = {"d","e","f"};
        map['4'] = {"g","h","i"};
        map['5'] = {"j","k","l"};
        map['6'] = {"m","n","o"};
        map['7'] = {"p","q","r","s"};
        map['8'] = {"t","u","v"};
        map['9'] = {"w","x","y","z"};

        if(digits.length() == 0)
        {
            return {};
        }
        std::vector<string> result;
        result = map[digits[0]];
        for (int i = 1; i < digits.length();i++)
        {
            std::vector<string> temp;
            for(int j = 0; j < result.size(); j++)
            {
                for(int k = 0; k < map[digits[i]].size(); k++)
                {
                    temp.push_back(result[j]+map[digits[i]][k]);
                }
                
            }
            result = temp;
        }

        return result;




    }
};

class Solution {
public:
    void solve(string& digits,std::unordered_map<char,string>& map,int idx,string comb, vector<string>& res)
    {
        if(idx == digits.length())
        {
            res.push_back(comb);
            return;
        }
        for(int k = 0; k < map[digits[idx]].size(); k++)
        {
            solve(digits,map,idx+1,comb+map[digits[idx]][k],res);

        }

    }
    vector<string> letterCombinations(string digits) {
        std::unordered_map<char,string> map;
        vector<string> res;
        if(digits.empty())
        {
            return res;
        }
        map['2'] = "abc";
        map['3'] = "def";
        map['4'] = "ghi";
        map['5'] = "jkl";
        map['6'] = "mno";
        map['7'] = "pqrs";
        map['8'] = "tuv";
        map['9'] = "wxyz";

        

        solve(digits,map,0,"",res);
        return res;




    }
};