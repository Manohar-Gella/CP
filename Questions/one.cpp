/*
Question 1: Longest Increasing Subsequence (LIS)
Write a C++ function to find the length of the longest increasing subsequence in an array.
*/

#include <iostream>
#include <vector>

int longestIncreasingSubsequence(std::vector<int>& nums) {
    int n = nums.size();
    std::vector<int> dp(n, 1);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] > nums[j]) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
    }

    return *std::max_element(dp.begin(), dp.end());
}
