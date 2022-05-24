//Link: https://leetcode.com/problems/sort-colors/submissions/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0:
                    nums[mid] = nums[low];
                    nums[low] = 0;
                    low++;
                    mid++;
                    break;
                case 1:
                    mid++;                 
                    break;
                case 2:
                    nums[mid] = nums[high];
                    nums[high] = 2;
                    high--;
                    break;
            }
        }
    }
};
