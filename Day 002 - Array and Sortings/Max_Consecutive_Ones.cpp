class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i, count=0, max=0;
        for(i=0 ; i<nums.size() ; i++)
        {
            if(nums[i]==1)
            {
                count++;
                if(count>max)
                {
                    max = count;
                }
            }
            else
            {
                count=0;
            }
        }
        return max;
    }
};
