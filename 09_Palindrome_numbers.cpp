class Solution {
public:
    bool isPalindrome(int x) {
        int reversed = 0;
        int temp = x;
        if (x < 0 || (x!= 0 && x%10 == 0))
        {
            return false;
        }
        while(temp > reversed)
        {
          reversed =   reversed*10 + temp%10;
          temp = temp/10;

        }
       
        return((reversed == temp) || (reversed/10 == temp)) ;
       

    }
};