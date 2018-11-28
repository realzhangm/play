//
// Created by colin on 2018/11/28.
//

//给定一个整数数组 nums ，找到一个具有最大和的连续子数组（子数组最少包含一个元素），返回其最大和。
//
//示例:
//
//输入: [-2,1,-3,4,-1,2,1,-5,4],
//输出: 6
//解释: 连续子数组 [4,-1,2,1] 的和最大，为 6。
//进阶:
//
//如果你已经实现复杂度为 O(n) 的解法，尝试使用更为精妙的分治法求解。

#include "leetcode.h"

class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        if (nums.size() == 0)
            return 0;
        int max_sum = nums[0], sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            sum = std::max(sum + nums[i], nums[i]);
            max_sum = std::max(max_sum, sum);
        }
        return max_sum;
    }
};


int main() {
    vector<int> v1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    vector<int> v2 = {-2, 1};
    vector<int> v3 = {2};
    vector<int> v4 = {-1};

    cout << Solution().maxSubArray(v1) << endl;
    cout << Solution().maxSubArray(v2) << endl;
    cout << Solution().maxSubArray(v3) << endl;
    cout << Solution().maxSubArray(v4) << endl;
}
