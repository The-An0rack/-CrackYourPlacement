//Link: https://leetcode.com/problems/find-the-duplicate-number/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> m(n+1,0);
        
        for(int i = 0; i < n; i++)
        {
            m[nums[i]]++;
            if(m[nums[i]] > 1)
            {
                return nums[i];
            }
        }
        return -1;
    }
};
