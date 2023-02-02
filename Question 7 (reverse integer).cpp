// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        int n=x;
        long int i=0;

        while(n!=0)
        {
            int digit = n%10;
            i = 10*i + digit;
            if(i > INT_MAX)
              return 0;
            if(i < INT_MIN)
              return 0;
            
            n/=10;
        }
        return(int)i;
    }
};