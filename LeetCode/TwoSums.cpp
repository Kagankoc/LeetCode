//
//  TwoSums.cpp
//  LeetCode
//
//  Created by KaganKOC on 12.10.2018.
//  Copyright © 2018 KaganKOC. All rights reserved.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;
        for(int i=0;i<nums.size();i++)
        {
            
            for(int j=i+1;j<nums.size();j++)
            {
               
                if(nums[j]+nums[i]==target)
                {
                    indices.push_back(i);
                    indices.push_back(j);
                }
            }
        }
        return indices;
    }
};
