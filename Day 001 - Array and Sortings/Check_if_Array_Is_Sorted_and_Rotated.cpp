/*
    1752. Check if Array Is Sorted and Rotated

    Given an array nums, return true if the array was originally sorted in non-decreasing order,
    then rotated some number of positions (including zero). Otherwise, return false.
    There may be duplicates in the original array.

    Note: An array A rotated by x positions results in an array B of the same length such that A[i] == B[(i+x) % A.length],
    where % is the modulo operation.

    -----------------------------------------------------------------------------------------------------------------------

    Example 1:

    Input: nums = [3,4,5,1,2]
    Output: true
    Explanation: [1,2,3,4,5] is the original sorted array.
    You can rotate the array by x = 3 positions to begin on the the element of value 3: [3,4,5,1,2].
    Example 2:

    Input: nums = [2,1,3,4]
    Output: false
    Explanation: There is no sorted array once rotated that can make nums.
    Example 3:

    Input: nums = [1,2,3]
    Output: true
    Explanation: [1,2,3] is the original sorted array.
    You can rotate the array by x = 0 positions (i.e. no rotation) to make nums.

*/

// C++ Solution:

class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n = nums.size();
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                cnt++;
            }
        }
        if (nums[n - 1] > nums[0])
        {
            cnt++;
        }
        return cnt <= 1;
    }
};

// Java Solution
class Solution
{
public
    boolean check(int[] nums)
    {
        int n = nums.length;
        int count = 0;

        for (int i = 1; i < n; i++)
        {
            if (nums[i - 1] > nums[i])
            {
                count++;
            }
        }
        if (nums[n - 1] > nums[0])
        {
            count++;
        }
        return count <= 1;
    }
}

#Python Solution
class Solution:
    def check(self, nums):
        n = len(nums)
        count = 0

        for i in range(1, n):
            if nums[i - 1] > nums[i]:
                count += 1

        if nums[-1] > nums[0]:
            count += 1

        return count <= 1
