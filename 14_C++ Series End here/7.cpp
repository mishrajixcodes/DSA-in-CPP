// https://www.interviewbit.com/problems/distribute-in-circle/
/* Distribute in Circle!

Problem Description

A items are to be delivered in a circle of size B.

Find the position where the Ath item will be delivered if we start from a given position C.

NOTE: Items are distributed at adjacent positions starting from C.



Problem Constraints
1 <= A, B, C <= 10^8



Input Format
First argument is an integer A.

Second argument is an integer B.

Third argument is an integer C.



Output Format
Return an integer denoting the position where the Ath item will be delivered if we start from a given position C.



Example Input
Input 1:

 A = 2
 B = 5
 C = 1
Input 2:

 A = 8
 B = 5
 C = 2


Example Output
Output 1:

 2
Output 2:

 4


Example Explanation
Explanation 1:

 The first item will be given to 1st position. Second (or last) item will be delivered to 2nd position
Explanation 2:

 The last item will be delivered to 4th position
*/

int solve(int A, int B, int C)
{
    return (C-1+A-1)%B+1;  //c-1 to convert it into zero based indexing;
                          //a-1 total steps it need to take.because it is starting from c so we take c (from where it is starting).
                          //%B to make it in crircle. for this we do c-1 because modulo follow zero based indexing.
                          //+1 to back to 1based indexing.
}
