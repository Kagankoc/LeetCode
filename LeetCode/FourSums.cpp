//
//  FourSums.cpp
//  LeetCode
//
//  Created by KaganKOC on 12.10.2018.
//  Copyright © 2018 KaganKOC. All rights reserved.
//
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        int second,third,fourth;
        
        for(int i=0;i<nums.size()-3;)
        {
            int first=nums[i];
            if(first>target) return result;
            second=i+1;
            third=second+1;
            fourth=nums.size()-1;
            while(fourth>third&&third>second)
            {
                if(first+nums[second]+nums[third]+nums[fourth]==target)
                {
                    result.push_back({first,nums[second],nums[third],nums[fourth]});
                    second++;
                    third++;
                    fourth--;
                    while((second < third) && nums[second] == nums[second-1]) second++;
                    while((third < fourth) && nums[third] == nums[third-1]) third++;
                    while((third < fourth) && nums[fourth] == nums[fourth+1]) fourth--;
                }
                else if(first+nums[second]+nums[third]+nums[fourth]<target){
                    third++;
                    while((third < fourth) && nums[third] == nums[third-1]) third++;
                }else{
                    fourth--;
                    while((third < fourth) && nums[fourth] == nums[fourth+1]) fourth--;
                }
            }
            
            i++;
            while((i < nums.size()) && nums[i] == nums[i-1])
                i++;
            
            
            return result;
        }
        
    }
};
