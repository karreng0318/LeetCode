class Solution {
public:
    int reverse(int x) {
        int temp;
        long int reverse = 0;
        temp = x;
        while(temp != 0)
        {
            reverse = reverse*10 + temp%10;
            temp = temp/10;
        }
        if(reverse > 2147483647 || reverse < -2147483648)
        {
            return 0;
        }
        return(reverse);
    }
};