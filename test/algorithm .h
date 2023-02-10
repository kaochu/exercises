#pragma once
#include"tree.h"

void RomaToInt()
{
//wait,and now,im not kknow how to solve it (cry)	
}

int removeElement(vector<int>& nums, int val) {
    int left = 0, right = 0, n = nums.size();
    while (right < n) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            ++left;
        }
        ++right;
    }
    return left;
}

void  Clock()
{

}
