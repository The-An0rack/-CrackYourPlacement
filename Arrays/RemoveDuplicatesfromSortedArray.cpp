//Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int itr1 = 1;
        int itr2 = 1;
        int k = 1;
        while(itr2 < nums.size())
        {
            if(nums[itr2] == nums[itr2 - 1])
            {
                itr2++;
            }
            else
            {
                nums[itr1] = nums[itr2];
                itr1++;
                itr2++;
                k++;
            }
        }
        return k;
    }
};
