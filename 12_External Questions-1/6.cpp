// https://leetcode.com/problems/palindrome-number/
/*
Given an integer x, return true if x is a palindrome, and false otherwise.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


Constraints:

-2^31 <= x <= 2^31 - 1


Follow up: Could you solve it without converting the integer to a string?
*/

#include <algorithm>

class Solution
{
public:
    bool isPalindrome(int x)
    {
        int compare = x;
        int rem, ans = 0;

        if (x < 0)  //negative numbers can't be palindrome
            return false;

        while (x)
        {
            rem = x % 10;
            x /= 10;
            if (ans > INT_MAX / 10) //for int overflow.
                return false;
            ans = ans * 10 + rem;
        }
        if (compare == ans)
            return true;
        else
            return false;
    }
};

/*
class Solution {
public:
    bool isPalindrome(int x) {
        int compare = x, ans = 0;
        if (x < 0)
            return false;
        while (x) {

            if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
                return false;
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return (ans==compare);
    }
};
*/
