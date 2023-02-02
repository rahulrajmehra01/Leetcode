// Given an integer x, return true if x is palindrome integer.

An integer is a palindrome when it reads the same backward as forward.

For example, 121 is a palindrome while 123 is not.



class Solution {
public:
     bool  isPalindrome(int x){
        int n=x;
        long int i=0;

         while(n>0){
             int num = n%10;
             i = 10*i + num;
             n/=10;
         }
       return i == x;
     }
};