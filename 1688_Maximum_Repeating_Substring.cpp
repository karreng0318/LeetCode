class Solution {
public:
    int maxRepeating(string sequence, string word) {
        if((word.length() > sequence.length()) || word.length() == 0 || sequence.length() == 0)
        {
            return 0;
        }
        int k = 0;
        string temp = word;

        while(sequence.find(temp) != string::npos){
			temp += word;
			k++;
		}
        return k;
    }
};