// https://leetcode.com/problems/reverse-integer/
/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).



Example 1:

Input: x = 123
Output: 321

Example 2:

Input: x = -123
Output: -321

Example 3:

Input: x = 120
Output: 21


Constraints:

-2^31 <= x <= 2^31 - 1
*/

#include<algorithm> // for woking of INT_MAX and INT_MIN not needed in leetcode or any platform.just extra knowledge.
class Solution
{
public:
    int reverse(int x)
    {
        int ans = 0;
        while (x)
        {   int rem=0;
            rem = x % 10;
            x /= 10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10)
            return 0;
            ans = ans * 10 + rem;
        }
        return ans;
    }
};
