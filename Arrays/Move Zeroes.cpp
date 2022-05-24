//link: https://leetcode.com/problems/move-zeroes/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int itr1 = 0;
        int itr2 = 1;
        while(itr2 < nums.size())
        {
            if(nums[itr1] != 0)
            {
                itr1++;
                if(itr1 > itr2) itr2 = itr1;
                continue;
            }
            if(nums[itr2] != 0)
            {
                nums[itr1] = nums[itr2];
                nums[itr2] = 0;
                itr1++;
                itr2++;
            }
            else
            {
                itr2++;
            }
            
        }
        
        
    }
};
