//link: 

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int,int> m;
        for(int i = 0; i < n; i++)
        {
            m.insert(make_pair(nums[i]),i);
        }
        map<int,int>::iterator start= m.begin();
        map<int,int>::reverse_iterator end = m.rbegin();
        
        while(start->first < end->first)
        {
            if(start->first + end->first == target)
            {
                return {start->second,end->second};
            }
        }
        return {-1};
    }
};
