class Solution {
public:
    int fib(int n) {
        int x = 0;
        if(n <= 1)
        { return n;}
        x = x + fib(n-1) + fib(n-2);

        return x;

    }
};